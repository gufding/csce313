
#include <stdio.h>
#include <unistd.h>
#include "system.h"
#include "alt_types.h"
#include <altera_up_avalon_video_character_buffer_with_dma.h>
#include <altera_up_avalon_video_pixel_buffer_dma.h>
#include <math.h>
#include <stdlib.h>

int main() {
  printf ("Hello World");
  alt_up_pixel_buffer_dma_dev *pix_buf;
  pix_buf = alt_up_pixel_buffer_dma_open_dev("/dev/video_pixel_buffer_dma_0");
  alt_up_pixel_buffer_dma_clear_screen(pix_buf, 0);
  
  return 0;
}
