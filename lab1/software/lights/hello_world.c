#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"

// macros for the basic numerical states of the 7seg displays. Listed in binary
#define ZERO  0b0111111
#define ONE   0b0000110
#define TWO   0b1011011
#define THREE 0b1001111
#define FOUR  0b1100110
#define FIVE  0b1101101
#define SIX   0b1111101
#define SEVEN 0b0000111
#define EIGHT 0b1111111
#define NINE  0b1101111

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

// storage for the present state in the hex display count
int hexCount[ 8 ];

void count( void )
{
	switch ( hexCount[ 0 ] )
		case 0:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, ZERO );
            break;
		case 1:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, ONE );
            break;
		case 2:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, TWO );
            break;
		case 3:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, THREE );
            break;
		case 4:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, FOUR );
            break;
		case 5:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, FIVE );
            break;
		case 6:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, SIX );
            break;
		case 7:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, SEVEN );
            break;
		case 8:
			hexCount[ 0 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 0 ] = 0;
			hexCount[ 1 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX0_BASE, NINE );
            break;

	switch ( hexCount[ 1 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 1 ] = 0;
			hexCount[ 2 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX1_BASE, NINE );
            break;

	switch ( hexCount[ 2 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 2 ] = 0;
			hexCount[ 3 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX2_BASE, NINE );
            break;

	switch ( hexCount[ 3 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 3 ] = 0;
			hexCount[ 4 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX3_BASE, NINE );
            break;

	switch ( hexCount[ 4 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 4 ] = 0;
			hexCount[ 5 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX4_BASE, NINE );
            break;

	switch ( hexCount[ 5 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 5 ] = 0;
			hexCount[ 6 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX5_BASE, NINE );
            break;

	switch ( hexCount[ 6 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 6 ] = 0;
			hexCount[ 7 ]++;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX6_BASE, NINE );
            break;

	switch ( hexCount[ 7 ] )
		case 0:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, ZERO );
            break;
		case 1:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, ONE );
            break;
		case 2:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, TWO );
            break;
		case 3:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, THREE );
            break;
		case 4:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, FOUR );
            break;
		case 5:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, FIVE );
            break;
		case 6:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, SIX );
            break;
		case 7:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, SEVEN );
            break;
		case 8:
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, EIGHT );
            break;
		case 9:
			hexCount[ 7 ] = 0;
			IOWR_ALTERA_AVALON_PIO_DATA( HEX7_BASE, NINE );
            break;
}

// Randomly light up the 7-seg displays
void randLights () {
  // Generate a random 7 bit number to correspond to each 7-seg display
  int* rand_config = decToBinary(rand() % 255);

  // Read each bit and light up positive bits
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

// Light up
void patternLights (int pos) {
  if (pos == 0) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 126);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 127);
  }
  else if (pos == 1) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 126);
  }
  else if (pos == 2) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 126);
  }
  else if (pos == 4) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 126);
  }
  else if (pos == 5) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 126);
  }
  else if (pos == 6) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 126);
  }
  else if (pos == 7) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 126);
  }
  else if (pos == 8) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 126);
  }
  else if (pos == 9) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 95);
  }
  else if (pos == 10) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 111);
  }
  else if (pos == 11) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 119);
  }
  else if (pos == 12) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX7_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 119);
  }
  else if (pos == 13) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX6_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 119);
  }
  else if (pos == 14) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX5_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 119);
  }
  else if (pos == 15) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX4_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 119);
  }
  else if (pos == 16) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX3_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 119);
  }
  else if (pos == 17) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX2_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 119);
  }
  else if (pos == 18) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX1_BASE, 127);
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 119);
  }
  else if (pos == 19) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 123);
  }
  else if (pos == 20) {
    IOWR_ALTERA_AVALON_PIO_DATA(HEX0_BASE, 125);
  }
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

  int pos = 0;

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
        for ( int i = 0; i < 9; i++ ) hexCount[ i ] = 0;

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
    if (current_state == 5) {
      patternLights(pos);
      if (pos == 20) pos = 0;
      else pos++;
    }
    if (current_state == 6) count( );

    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_BASE,current_value);

    // wait
    if (current_state==3) usleep (250000);
    else if (current_state==5) usleep (125000);
    else usleep (50000);
  }


  return 0;
}
