// 2. Holoro.c
// Michael Leon Putra Widhi - 13521108

void Holoro (char* input) {
    int *a;
    int bilangan [6];
    
    read_six_numbers(input,bilangan);

    if (bilangan[0] != 163) {
        illegal_move();
    }

    a = bilangan;
    do {
        if (a[1] != ((int)*a >> 1 ^ *a)) {
            illegal_move();
        }
        a++;
    } while (a != bilangan + 5);
    
    return;
}

// Answer : 163 242 139 206 169 253