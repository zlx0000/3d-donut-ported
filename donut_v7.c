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
        _ = 3145728L - x * x - y * y >> 11; \
        x = x * _ >> 10;                    \
        y = y * _ >> 10;

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
        sA = 1024L;
        cA = 0L;
        sB = 1024L;
        cB = 0L;
        printf("malloc successful\n");
        for (;;) {
                fill(b, 32, 1760);
                fill(z, 127, 1760);
                sj = 0L;
                cj = 1024L;
                for (j = 0; j < 90; j++) {
                        si = 0L;
                        ci = 1024L;
                        for (i = 0; i < 324; i++) {
                                R1 = 1L, R2 = 2048L, K2 = 5120L * 1024L;
                                x0 = R1 * cj + R2;
                                x1 = ci * x0 >> 10;
                                x2 = cA * sj >> 10;
                                x3 = si * x0 >> 10;
                                x4 = R1 * x2 - (sA * x3 >> 10);
                                x5 = sA * sj >> 10;
                                x6 = K2 + R1 * 1024L * x5 + cA * x3;
                                x7 = cj * si >> 10;
                                x = 40L + 30L * (cB * x1 - sB * x4) / x6;
                                y = 12L + 15L * (cB * x4 + sB * x1) / x6;
                                N = (-cA * x7 - cB * ((-sA * x7 >> 10) + x2) - ci * (cj * sB >> 10) >> 10) - x5 >> 7;
                                o = x + 80L * y;
                                zz = (x6 - K2) >> 15;
                                if (22 > y && y > 0 && x > 0 && 80 > x && zz < z[o]) {
                                        z[o] = zz;
                                        b[o] = d[N > 0 ? N : 0];
                                }
                                R(5L, 8, ci, si)
                        }
                        R(9L, 7, cj, sj)
                }
                for (k = 0; 1761 > k; k++) {
                        putchar(k % 80 ? b[k] : 10);
                }
                R(5L, 7, cA, sA);
                R(5L, 8, cB, sB);

                printf("\f");
        }
        return 0;
}
