#include <stdio.h>

// SOAL 1 - Hitung x | y hanya dengan ~ dan &
int gura (int x, int y) {
    int Z;
    Z = ~(~x & ~y);
    return Z;
}

// SOAL 2 - Nilai terkecil dari 2s complement
int rushia (void) {
    int Z;
    Z = (1 << 31);
    return Z;
}

// SOAL 3 - Sisa dari x jika dibagi 2^n
unsigned int kobokan (unsigned int x, unsigned int n) {
    int Z;
    int a = (1 << n);
    Z = (x & (a + ~(0x0)));
    return Z;
}

// SOAL 4 - mengembalikan byte ke n dari x urut dari LSB ke MSB
int fauna (int x, int n) {
    int a = n << 3;
    int Z = (x >> a) & 0xFF;
    return Z;
}

// SOAL 5 - apakah x berada diantara 135 dan 182 inklusif
int yamada (int x) {
    int Z;
    int p = ((0x86 + ~(x + ~0x0)) >> 31) & 1;
    int q = ((x + (~0xB6)) >> 31) & 1;
    Z = p & q;
    return Z;
}

// SOAL 6 - balik urutan byte pada X
int pekora (int x) {
    int Z;
    int cek1 = x & 0xFF;
    int cek2 = (x >> (1<<3)) & 0xFF;
    int cek3 = (x >> (2<<3)) & 0xFF;
    int cek4 = (x >> (3<<3)) & 0xFF;
    Z = cek4 | (cek3 << 8);
    Z = Z | (cek2 << 16);
    Z = Z | (cek1 << 24);
    return Z;
}

// SOAL 7 - geser X ke kanan sebanyak n dengan logical shift
int mumei (int x, int n) {
    int Z;
    int shift = x >> n;
    int mark = 1 << 31;
    mark = mark >> n;
    mark = mark << 1;
    Z = shift & ~mark;
    return Z;
}

// SOAL 8 - Hitung trailling zeros repr 32 bit
int moona (int x) {
    int geserkanan = x & (~x+1);
    int counter = 0;
    int nol = (((!geserkanan << 31) >> 31) & 32);
    counter = nol | (((((!!(0xAAAAAAAA & geserkanan) << 31) >> 31) & (1))) | counter);
    counter = nol | (((((!!(0xCCCCCCCC & geserkanan) << 31) >> 31) & (2))) | counter);
    counter = nol | (((((!!(0xF0F0F0F0 & geserkanan) << 31) >> 31) & (4))) | counter);
    counter = nol | (((((!!(0xFF00FF00 & geserkanan) << 31) >> 31) & (8))) | counter);
    counter = nol | (((((!!(0xFFFF0000 & geserkanan) << 31) >> 31) & (16))) | counter);
    return counter;
}

// SOAL 9 - Sisa dari a jika dibagi 30
unsigned int ollie (unsigned int a) {
    int q;
    int minsatu;
    int pemb;
    int x;
    int y;
    int Z;
    int b;
    int c;
    int kondisi;
    int min;
    minsatu = ~(0x0);
    pemb = (1 << 5) + minsatu;
    // Pengulangan 1
    x = a >> 5;  // div nya
    y = (a & (pemb));  // mod nya
    Z = (x << 1) + y;
    // Pengulangan 2
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Pengulangan 3
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Pengulangan 4
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Pengulangan 5
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Pengulangan 6
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Pengulangan 7
    b = Z >> 5;
    c = (Z & (pemb));
    Z = (b << 1) + c;
    // Cek value
    // 30 = 0x1E, 32 = 0x20
    q = ((Z + ~0x1D) >> 31) & 1; // cek apakah dia diatas 30, kalo iya muncul 0
    kondisi = ((!q << 31) >> 31);
    Z = Z + (kondisi & ~0x1D);
    return Z;
}

// SOAL 10 - Hitung 2*f untuk sebuah representasi floating point
unsigned coco(unsigned uf) {
    int s = uf & (0x80 << 24);
    int ex = (0x7F << 24) | (0x80 << 16);
    int nilai = uf & ex;
    int nol = !nilai;
    if (nol) {
        uf = (uf << 1) | s;
    } else if (nilai != ex) {
        uf += (1 << 23);
    }
    return uf;
}

int main () {
    // POINT : 33/47
    int a = 69;
    int c = 50;
    // Fungsi 1 : 100% DONE
    // int b = gura (a,c);
    // printf("%d",b);
    // printf("\n");
    // printf("%d",a | c);
    // Fungsi 2 : 100% DONE
    // printf("%d",rushia());
    // Fungsi 3 : 100% DONE
    // int f = kobokan (100,5);
    // printf("%d",f);
    // Fungsi 4 : 100%
    // int g = fauna (0x12345678,1)
    // printf("%d",g);
    // Fungsi 5 : 100%
    // int h = yamada (183);
    // printf("%d",h);
    // Fungsi 6 : 100%
    // int i = pekora(0x1020304);
    // printf("%d",i);
    // printf("\n");
    // printf("%d",0x4030201);
    // Fungsi 7 : 100%
    // int j = mumei(0x87654321,4);
    // printf("%d",j);
    // printf("\n");
    // printf("%d",0x08765432);
    // Fungsi 8 : 100%
    // int k = moona (128);
    // printf("%d",k);
    //  z = moona(200);
    // printf("%d",z);
    // Fungsi 9 : 100%
    int p = ollie (58);
    int q = ollie (59);
    int r = ollie (60);
    int s = ollie (61);
    int t = ollie (62);
    printf("%d %d %d %d %d",p,q,r,s,t);
    // Fungsi 10 : 100%
    return 0;
}