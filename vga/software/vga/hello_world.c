
#include <stdio.h>
#include <unistd.h>
#include "alt_types.h"
#include <altera_up_avalon_video_character_buffer_with_dma.h>
#include <altera_up_avalon_video_pixel_buffer_dma.h>
#include <math.h>
#include <stdlib.h>
#include <sys/alt_alarm.h>
#include "myfile.h"

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

void displayImage (alt_u8 *image_array, int screen_width, int screen_height) {
  alt_up_pixel_buffer_dma_dev *pix_buf;
  pix_buf = alt_up_pixel_buffer_dma_open_dev("/dev/video_pixel_buffer_dma_0");
  alt_up_pixel_buffer_dma_clear_screen(pix_buf, 0);

  // Working for loop to display on the screen
  /*for (int i = 0; i < screen_height; i++) {
    for (int j = 0; j < screen_width; j++) {
      alt_up_pixel_buffer_dma_draw(pix_buf,
       (myimage[(i*screen_height+j)*3+0] << 16) +
       (myimage[(i*screen_height+j)*3+1]<<8) + 
       (myimage[(i*screen_height+j)*3+2]), j, i);
    }
  }*/
  
  // Attempting to rotate the image 30 degrees. This is not working at the moment
  for (int i = 0; i < screen_height; i++) {
    for (int j = 0; j < screen_width; j++) {
      r = i-160;
      c = j-240;
      r = (j-240)*(-sin(30))+(i-160)*cos(30);
      c = (j-240)*cos(30)+(i-160)*sin(30);
      r += 160;
      c += 240;
      r = roundf(r);
      c = roundf(c);
      
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
  displayImage(myimage, 480, 320);
  displayFrameRate(char_buf);
    
  return 0;
}
