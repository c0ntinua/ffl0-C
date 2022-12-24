


int main(void) {
    randomize_buffers();
    load_filters(3,3);
    filter g = random_filter(5,5);
    //printf("%d %d %f", f[2].length,f[2].r[1],f[2].a[1]);
    for (int i = 0 ; i < 20; i++);// printf("%f\n", power*rnd());
    InitWindow(C*W, R*H, "ffl0-C");
    SetTargetFPS(60);             
    while (!WindowShouldClose())  {
        respond();
        BeginDrawing();;
        plot_reading_buffer();
        for (int i = 0 ; i < num_filters ; i++) {
            apply_filter(i);
            toggle_buffers();       
        }
        EndDrawing(); 
    }
    CloseWindow();  
    return 0;
}