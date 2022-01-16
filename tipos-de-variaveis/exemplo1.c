#include <stdio.h>
#include <conio.h>

main(){
    char a;
    char b;
    unsigned char c;
    short int x;
    unsigned short x1;
    int z;
    unsigned int z1;
    long z2;
    unsigned long z3;
    float r;
    double r1;

    a = 1;
    b = 'i';
    c = 'I';
    x = 32768;
    x1 = 65535;
    z = 2147483647;
    z1 = 4294967295;
    z2 = 2147483647;
    z3 = 4294967295;
    r = 2147483647;
    r1 = 1.7e+308;

    printf("char    -> %d", a);
    printf("\n\nchar    -> %c - %d", b,b);
    printf("\n\nunsigned char -> %c - %d", c,c);
    printf("\n\nshort  -> %d", x);
    printf("\n\nunsigned short  -> %d", x1);
    printf("\n\nint  -> %d", z);
    printf("\n\nunsigned int  -> %u", z1);
    printf("\n\nlong  -> %d", z2);
    printf("\n\nunsigned long  -> %u", z3);
    printf("\n\nfloat  -> %f", r);
    printf("\n\ndouble  -> %e", r1);

getch();
}
