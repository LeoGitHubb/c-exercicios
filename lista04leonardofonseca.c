#include <stdio.h>
int main(void){
    int a = 8, y = 2, c = 12;
    float x = 6.0, z = 4.0, b = 7.5;

    int Qa = x - y * ++a;
    printf("O resultado da (a) e %d.\n", Qa);

    int Qb = x - y * a > c % y;
    printf("O resultado da (b) e %d.\n", Qb);

    int Qc = y != c;
    printf("O resultado da (c) e %d.\n", Qc);

    int Qd = c % y <= y % c;
    printf("O resultado da (d) e %d.\n", Qd);

    int Qe = !(a>b);
    printf("O resultado da (e) e %d.\n", Qe);

    int Qf = ( ( z / a ) + b * --y );
    printf("O resultado da (f) e %d.\n", Qf);

    int Qg = (c=7) || (b<2);
    printf("O resultado da (g) e %d.\n", Qg);

    int Qh = (c=7) && (b<2);
    printf("O resultado da (h) e %d.\n", Qh);
}

