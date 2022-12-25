void respond() {
    if (IsKeyDown(KEY_Q)) exit(0);
    if (IsKeyReleased(KEY_P)) { power = 10*rnd();load_filters(r_span,c_span);}
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_ONE) ) num_filters = 1;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_TWO) ) num_filters = 2;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_THREE) ) num_filters = 3;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_FOUR) ) num_filters = 4;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_FIVE) ) num_filters = 5;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_SIX) ) num_filters = 6;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_SEVEN) ) num_filters = 7;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_EIGHT) ) num_filters = 8;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_NINE) ) num_filters = 9;
    if (IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_ZERO) ) num_filters = 10;
    if (IsKeyReleased(KEY_SPACE) ) randomize_buffers();
    if (IsKeyReleased(KEY_F) ) load_filters(r_span,c_span);
    if (IsKeyReleased(KEY_ONE)) f[0] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_TWO)) f[1] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_THREE)) f[2] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_FOUR)) f[3] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_FIVE)) f[4] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_SIX)) f[5] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_SEVEN)) f[6] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_EIGHT)) f[7] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_NINE)) f[8] = random_filter(rand()%r_span+1,rand()%c_span+1);
    if (IsKeyReleased(KEY_ZERO)) f[9] = random_filter(rand()%r_span+1,rand()%c_span+1);

}