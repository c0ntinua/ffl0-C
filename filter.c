filter _random_filter(int r, int c) {
    filter new_filter;
    new_filter.length = (2*r + 1)*(2*c + 1);
    int piece_index =0;
    for (int i = -r ; i <= r; i++) for (int j = -c; j <= c; j++) {
        new_filter.r[piece_index] = i;
        new_filter.c[piece_index] = j;
        new_filter.a[piece_index] = power*rnd();
        piece_index++;
    }
    return new_filter;
}

filter random_filter() {
    return _random_filter(rand()%r_span+1,rand()%c_span+1);
}

void load_filters(int r, int c) {
    for (int i = 0; i < F; i++) f[i] = random_filter();
}

int safe(int i, int M) {
    if (i < 0) return i + M;
    if (i > M -1) return i - M;
    return i;
}


real _filter(int i, int r, int c ) {
    real sum = 0;
    for (int piece_index = 0; piece_index < f[i].length; piece_index++) {
        int row = safe(r + f[i].r[piece_index],R);
        int col = safe(c + f[i].c[piece_index],C);
        sum += B[reading][row][col]*f[i].a[piece_index];
    }
    return tanh(sum);
}

void apply_filter(int i) {
    for (int r = 0; r < R ; r++) 
        for (int c = 0; c < C ; c++)
            B[!reading][r][c] = _filter(i,r,c);
}







