#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"

// Function that converts a decimal to a binary
int* decToBinary (int n) {
  static int binarr[7];
  for (int i = 7; i >= 0; i--) {
    int k = n >> i;
    if (k & 1) binarr[i] = 1;
    else binarr[i] = 0;
  }
  return binarr;
}

// Randomly light up the 7-seg displays
void randLights () {
  int* rand_config = decToBinary(rand() % 255);
  for (int i = 7; i >= 0; i--) printf("%d", rand_config[i]);
  printf("\n");

  if (rand_config[0] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 0);
  if (rand_config[1] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 0);
  if (rand_config[2] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 0);
  if (rand_config[3] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 0);
  if (rand_config[4] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 0);
  if (rand_config[5] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 0);
  if (rand_config[6] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 0);
  if (rand_config[7] == 0) IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 127);
  else IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 0);
}

int main()
{
  alt_u32 current_value;
  alt_u32 current_state;
  alt_u8 current_direction;
  alt_u32 keys;

  current_state=3;
  current_value=1;
  current_direction=0;

  printf ("Program running (UART)...\n");

  while (1) {
    // read the current state of the keys
    keys=IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

    // switch speed if necessary
    if ((keys != 7) && (keys != current_state)) {
      if (keys == 3) {  // key 3, 250 ms, rand 7-seg config
        printf ("speed set to 250 ms\n");
      }
      else if (keys == 5) {  // key 2
        printf ("speed set to 150 ms\n");
      }
      else if (keys == 6) {  // key 1
        printf ("speed set to 50 ms\n");
      }
      current_state=keys;
    }
   
    // manage LEDS
    if ((current_direction==0) && (current_value==(1 << 25))) {  // switch direction if necessary
        current_direction=1;
    }
    else if ((current_direction==1) && (current_value==1)) {
        current_direction=0;
    }
    else if (current_direction==0) {  // move light
      current_value = current_value << 1;
    }
    else {
      current_value = current_value >> 1;
    }
    
    // update lights
    if (current_state == 3) randLights();
    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_BASE,current_value);
    
    // wait
    if (current_state==3) usleep (250000);
    else if (current_state==5) usleep (125000);
    else usleep (50000); 
  }


  return 0;
}
