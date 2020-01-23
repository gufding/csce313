#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"

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
        int rand_config = (rand() % 255);
	printf("%d", rand_config);
	IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 4);
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
    else current_value = current_value >> 1;
    
    // update lights
    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_BASE,current_value);
    
    // wait
    if (current_state==3) usleep (250000);
    else if (current_state==5) usleep (125000);
    else usleep (50000); 
  }


  return 0;
}
