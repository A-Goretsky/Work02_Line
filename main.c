#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;


  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  draw_line(1, 1, 100, 50, s, c);
  draw_line(30, 100, 500, 400, s, c);
  draw_line(41, 50, 300, 100, s, c);
  draw_line(30, 200, 400, 250, s, c);
  draw_line(30, 200, 250, 400, s, c); //draws only to end of first octant.

  display(s);
  save_extension(s, "lines.png");
}
