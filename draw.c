#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
    
    int x = x0;
    int y = y0;
    int A = y1 - y0;
    int B = -(x1 - x0);
    int D;
    int A1;
    int B1;
    A1 = 2;
    B1 = 2;

    //Octant 1 Params: x1 > 0, y1 > 0, x1 >= y1
    //Octant 2 Params: x1 > 0; y1 > 0, y1 > x1
    //Octant 7 Params: x1 > 0; y1 < 0, abs(y1) > x1
    //Octant 8 Params: x1 > 0; y1 < 0, x1 >= abs(y1)
    //Octant 5 - Extention of Octant 1
    //Octant 6 - Extention of Octant 2
    //Octant 3 - Extention of Octant 7
    //Octant 4 - Extention of Octant 8

    //3 / 7 - draw_line(0, YRES-1, XRES/2, 0, s, c);
    
    //Octant 1
    if (x1 > 0) {
      if (y1 > 0) {
        //Octant 1 (and 5?)
	if (x1 >= y1) {

	}
	//Octant 2 (and 6?)
	else {

	}
      }
      else {
	if (abs(y1) > x1
    if ((x1 > 0) && (y1 > 0) && (x1 >= y1)) {
        D = (2 * A) + B;
        while (x < x1) {
            plot(s, c, x, y);
            if (D > 0) {
                y++;
                D += B1; //already doubled
            }
            x++;
            D += A1; //already doubled
        }
    }
    else if (x
    //Octant 2
    D = A + (2 * B);
    
}
