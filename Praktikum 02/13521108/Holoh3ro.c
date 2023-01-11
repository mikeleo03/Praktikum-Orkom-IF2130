// 3. Holoh3ro.c
// Michael Leon Putra Widhi - 13521108

void Holoh3ro(char* input) {
    int val;
    int a;
    int b;
    
    val = sscanf(input,"%d %d",&a,&b);
    if (val < 2) {
        illegal_move();
    }
    
    switch(a) {
        case 0:
            val = 335;
            break;
        case 1:
            val = 0;
            break;
        case 2:
            val = 543;
            val = val - 956;
        case 4:
            val = 0;
        case 5:
            val = -335;
            val = val + 431;
        case 6:
            val = 0;
        case 7:
            val = 0;
            val = val - 335;
        default:
            val = 0;
            illegal_move();
    }

    val = val - 335;

    if (val - 335 != b) {
        illegal_move();
    }
    
    return;
}

// Answer : 1 -670