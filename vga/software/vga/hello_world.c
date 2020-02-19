
#include <stdio.h>
#include <unistd.h>
#include "alt_types.h"
#include <altera_up_avalon_video_character_buffer_with_dma.h>
#include <altera_up_avalon_video_pixel_buffer_dma.h>
#include <math.h>
#include <stdlib.h>
#include <sys/alt_alarm.h>
#include "myfile.h"

#define PI 3.141592

/*void measuringFrameRate() {
  alt_u32 ticks_per_second = alt_ticks_per_second();
  alt_u32 current_tick = 0, prev_tick = alt_nticks();
}*/

void printOnScreen(alt_up_char_buffer_dev *char_buf, char *message) {
  char_buf = alt_up_char_buffer_open_dev("/dev/video_character_buffer_with_dma_0");
  if (!char_buf) printf("error opening character buffer\n");
  alt_up_char_buffer_clear(char_buf);
  alt_up_char_buffer_string(char_buf, message, 35, 50);
}

void displayImage (alt_u8 *image_array, int screen_width, int screen_height, float angle) {
  
  alt_up_pixel_buffer_dma_dev *pix_buf;
  pix_buf = alt_up_pixel_buffer_dma_open_dev("/dev/video_pixel_buffer_dma_0");
  alt_up_pixel_buffer_dma_clear_screen(pix_buf, 0);

  // Display the image at the angle given
  alt_u16 r;
  alt_u16 c;
  for (int i = 0; i < screen_height; i++) {
    for (int j = 0; j < screen_width; j++) {
      // Get the translated image by coordinates for row and colmn
      r = ((j-160)*sin(angle))+((i-120)*cos(angle));
      c = ((j-160)*cos(angle))+((i-120)*(-sin(angle)));
      // Get the coordinates back to top left of screen
      r += 120;  // Width of screen divided by 2 to get back to original coordinate
      c += 160;  // Heigh of screen divided by 2 to get back to original coordinate
      r = roundf(r);
      c = roundf(c);

      // Draw the image
      alt_up_pixel_buffer_dma_draw(pix_buf,
       (myimage[(i*screen_width+j)*3+0] << 16) +
       (myimage[(i*screen_width+j)*3+1] << 8) +
       (myimage[(i*screen_width+j)*3+2]), (int)c, (int)r);
    }
  }
}

int main() {
  myimage[230401];  // Picture file in an array
  alt_up_char_buffer_dev *char_buf;

  // Angles used for rotating screen. In radians
  float angles[13] = {0, PI/6, PI/3, PI/2, (2*PI)/3, (5*PI)/6, PI,
                     (7*PI)/6, (4*PI)/3, (3*PI)/2, (5*PI)/3, (11*PI)/6, 2*PI};
  while(1) {
    // Clockwise rotation
    for (int i = 0; i < 13; i++) {
      printOnScreen(char_buf, "Clockwise");
      displayImage(myimage, 320, 240, angles[i]);
    }
    // Couner-clockwise rotation
    for (int i = 11; i > 0; i--) {
      printOnScreen(char_buf, "Counter-clockwise");
      displayImage(myimage, 320, 240, angles[i]);
    }
  }
  return 0;
}
