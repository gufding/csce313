
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

void measuringFrameRate() {
  alt_u32 ticks_per_second = alt_ticks_per_second();
  alt_u32 current_tick = 0, prev_tick = alt_nticks();
}
void displayFrameRate(alt_up_char_buffer_dev *char_buf) {
  char_buf = alt_up_char_buffer_open_dev("/dev/video_character_buffer_with_dma_0");
  if (!char_buf) printf("error opening character buffer\n");
  alt_up_char_buffer_clear(char_buf);
  alt_up_char_buffer_string(char_buf, "Video Works", 35, 50);
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
      r += 120;
      c += 160;
      r = roundf(r);
      c = roundf(c);
   
      // Draw the image
      alt_up_pixel_buffer_dma_draw(pix_buf,
       (myimage[(i*screen_height+j)*3+0] << 16) +
       (myimage[(i*screen_height+j)*3+1] << 8) + 
       (myimage[(i*screen_height+j)*3+2]), (int)c, (int)r);
    }
  }  
}

int main() {  
  myimage[230401];
  alt_up_char_buffer_dev *char_buf;
  float angles[12] = {0, PI/6, PI/3, PI/2, (2*PI)/3, (5*PI)/6, PI,
                     (7*PI)/6, (4*PI)/3, (3*PI)/2, (5*PI)/3, (11*PI)/6, 2*PI};
  while(1) {
    for (int i = 0; i < 13; i++) {
      displayImage(myimage, 480, 320, angles[i]);
    }
    for (int i = 13; i != 0; i--) {
      displayImage(myimage, 480, 320, angles[i]);
    }
  }
  displayFrameRate(char_buf);
    
  return 0;
}
























