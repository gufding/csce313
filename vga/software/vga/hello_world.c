
#include <stdio.h>
#include <unistd.h>
#include "alt_types.h"
#include <altera_up_avalon_video_character_buffer_with_dma.h>
#include <altera_up_avalon_video_pixel_buffer_dma.h>
#include <math.h>
#include <stdlib.h>
#include "myfile.h"

int main() {
  myimage[230401];
  alt_up_pixel_buffer_dma_dev *pix_buf;
  pix_buf = alt_up_pixel_buffer_dma_open_dev("/dev/video_pixel_buffer_dma_0");
  alt_up_pixel_buffer_dma_clear_screen(pix_buf, 0);
  
  for (int i = 0; i < 320; i++) {
    for (int j = 0; j < 480; j++) {
      alt_up_pixel_buffer_dma_draw(pix_buf, (myimage[(i*320+j)*3+0] << 16) +
       (myimage[(i*320+j)*3+1]<<8) + (myimage[(i*320+j)*3+2]), j, i);
    }
  }
  
  /*for (int i = 0; i < 320; i++) {
    for (int j = 0; j < 480; j++) {
      alt_up_pixel_buffer_dma_draw(pix_buf, 75, j, i);
    }
  }*/
  
  return 0;
}
