#include <stdio.h>
long _, j, i, k, sj, cj, si, ci, R1, R2, K2, x0, x1, x2, x3, x4, x5, x6, x7, x, y, N, o, sA, cA, sB, cB, Nt;
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
        _ = 12288 - x * x - y * y >> 7; \
        x = x * _ >> 6;                    \
        y = y * _ >> 6;

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
        sA = 64;
        cA = 0;
        sB = 64;
        cB = 0;
        printf("malloc successful\n");
        for (;;) {
                fill(b, 32, 1760);
                fill(z, 127, 1760);
                sj = 0;
                cj = 64;
                for (j = 0; j < 90; j++) {
                        si = 0;
                        ci = 64;
                        for (i = 0; i < 324; i++) {
                                R1 = 1, R2 = 128, K2 = 320 * 64;
                                x0 = R1 * cj + R2;
                                x1 = ci * x0 >> 6;
                                x2 = cA * sj >> 6;
                                x3 = si * x0 >> 6;
                                x4 = R1 * x2 - (sA * x3 >> 6);
                                x5 = sA * sj >> 6;
                                x6 = K2 + R1 * 64 * x5 + cA * x3;
                                x7 = cj * si >> 6;
                                x = 40 + 30 * (cB * x1 - sB * x4) / x6;
                                y = 12 + 15 * (cB * x4 + sB * x1) / x6;
                                N = (-cA * x7 - cB * ((-sA * x7 >> 6) + x2) - ci * (cj * sB >> 6) >> 6) - x5 >> 3;
                                o = x + 80 * y;
                                zz = (x6 - K2) >> 11;
                                if (22 > y && y > 0 && x > 0 && 80 > x && zz < z[o]) {
                                        z[o] = zz;
                                        b[o] = d[N > 0 ? N : 0];
                                }
                                R(1, 4, ci, si)
                        }
                        R(2, 3, cj, sj)
                }
                for (k = 0; 1761 > k; k++) {
                        putchar(k % 80 ? b[k] : 10);
                }
                R(1, 3, cA, sA);
                R(1, 4, cB, sB);

                printf("\f");
        }
        return 0;
}
