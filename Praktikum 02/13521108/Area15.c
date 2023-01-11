// 4. Area15.c
// Michael Leon Putra Widhi - 13521108

void Area15(int input) {
    int init;
    char kata [6];
    int a;
    
    init = string_length(input);
    if (init != 6) {
        illegal_move();
    }

    init = 0;

    do {
        kata[init] = "ck2hi3ersfotm1p0Eh??? You don\'t wanna do this anymore??? :(("
            [*(char *) (input + init) & 0xf];
        init++;
    } while (init != 6);

    if (!strings_not_equal(kata,"photos")) {
        illegal_move();
    }

    return;
}

// Answer : NCJKJH