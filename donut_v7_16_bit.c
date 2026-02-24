#include <stdio.h>

int _, j, i, k, sj, cj, si, ci, R1, R2, K2, x0, x1, x2, x3, x4, x5, x6, x7, x, y, N, o, sA, cA, sB, cB, Nt;
char *d;
char zz;
char *b;
char *z;
char *malloc();
fill(dst, c, n)
        char *dst;
        int c;
        int n;
{
        while (n--) {
                *dst++ = c;
        }
}

#define R(mul, shift, x, y)                \
        _ = x;                             \
        x -= mul * y >> shift;             \
        y += mul * _ >> shift;             \
        _ = 768 - x * x - y * y >> 5;      \
        x = x * _ >> 4;                    \
        y = y * _ >> 4;

int main()
{
        if ((b = malloc(1760)) == 0 || (z = malloc(1760)) == 0 || (d = malloc(12)) == 0) {
                write(2, "no mem\n", 7); exit(1);
        }
        printf("malloc successful\n");
        d[0] = '0';
        d[1] = ',';
        d[2] = '-';
        d[3] = '~';
        d[4] = ':';
        d[5] = ';';
        d[6] = '=';
        d[7] = '!';
        d[8] = '*';
        d[9] = '#';
        d[10] = '$';
        d[11] = '@';
        sA = 16;
        cA = 0;
        sB = 16;
        cB = 0;
        printf("malloc successful\n");
        for (;;) {
                fill(b, 32, 1760);
                fill(z, 127, 1760);
                sj = 0;
                cj = 16;
                for (j = 0; j < 90; j++) {
                        si = 0;
                        ci = 16;
                        for (i = 0; i < 324; i++) {
                                R1 = 1, R2 = 32, K2 = 80 * 16;
                                x0 = R1 * cj + R2;
                                x1 = ci * x0 >> 4;
                                x2 = cA * sj >> 4;
                                x3 = si * x0 >> 4;
                                x4 = R1 * x2 - (sA * x3 >> 4);
                                x5 = sA * sj >> 4;
                                x6 = K2 + R1 * 16 * x5 + cA * x3;
                                x7 = cj * si >> 4;
                                x = 40 + 30 * (cB * x1 - sB * x4) / x6;
                                y = 12 + 15 * (cB * x4 + sB * x1) / x6;
                                N = (-cA * x7 - cB * ((-sA * x7 >> 4) + x2) - ci * (cj * sB >> 4) >> 4) - x5 >> 1;
                                o = x + 80 * y;
                                zz = (x6 - K2) >> 7;
                                if (22 > y && y > 0 && x > 0 && 80 > x && zz < z[o]) 
                                {
                                        z[o] = zz;
                                        b[o] = d[N > 0 ? N : 0];
                                }
                                R(2, 3, ci, si)
                        }
                        R(3, 2, cj, sj)
                }
                for (k = 0; 1761 > k; k++) {
                        putchar(k % 80 ? b[k] : 10);
                }
                R(2, 2, cA, sA);
                R(2, 3, cB, sB);
                printf("\f");
        }
        return 0;
}
