#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 1000
#define HEIGHT 800

int main() {
    int i; 

    init_drawing(WIDTH,HEIGHT,0.5);
    
    repeat(2){
        draw(100);
        move(110);
        turn(60,LEFT);
        draw(50);
        move(60);
        turn(120,LEFT);
    } loop;
    
    display_drawing();

    return 0;
}
