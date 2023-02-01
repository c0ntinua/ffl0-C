int main(void) {
    randomize_buffers();
    load_filters(3,3);
    InitWindow(C*W, R*H, "ffl0");
    SetTargetFPS(60);             
    while (!WindowShouldClose())  {
        respond();
        BeginDrawing();
        plot_reading_buffer();
        for (int i = 0 ; i < num_filters ; i++) {
            apply_filter(i);
            reading = !reading;   
        }
        EndDrawing(); 
    }
    CloseWindow();  
    return 0;
}