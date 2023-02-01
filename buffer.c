

void set_rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}

int hue_from(real x) { 
    return (int)trunc( (128.0 *(x + 1.0)) ); 
}

real rnd() {
    return 1.0 - 2*(rand()/((real)RAND_MAX));
}

void randomize_buffers() { 
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) {
        B[reading][r][c] = rnd();
        B[!reading][r][c] = rnd();
    }      
}

color color_from(int i) { 
    return (color){.r = i, .g = i, .b = i, .a = 255};
}

void plot_reading_buffer() {
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) 
        DrawRectangle( c*W, r*H, W,  H, color_from(hue_from(B[reading][r][c])));
}