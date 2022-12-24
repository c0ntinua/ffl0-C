
int hue_from(real x) { 
    return (int)trunc( (128.0 *(x + 1.0)) ); 
}

real rnd() {
    return 1.0 - 2*(rand()/((real)RAND_MAX));
}

void randomize_buffers() { 
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) {
        B[reading][r][c] = rnd();
        B[writing][r][c] = rnd();
    }      
}

color color_from(int i) { 
    return (color){.r = i, .g = i, .b = i, .a = 255};
}

void plot_reading_buffer() {
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) 
        DrawRectangle( c*W, r*H, W,  H, color_from(hue_from(B[reading][r][c])));
}
// void plot_display_buffer() {
//     for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) 
//         DrawRectangle( c*W, r*H, W,  H, color_from(hue_from(display_buffer[r][c])));
// }