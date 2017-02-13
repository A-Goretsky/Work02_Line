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
    int D = (2 * A) + B;

    B *= 2;
    A *= 2;

    while (x < x1) {
        plot(s, c, x, y);
        if (D > 0) {
            y++;
            D += B; //already doubled
        }
        x++;
        D += A; //already doubled
    }
}