#include <stdio.h>

double f(double x) {
    return x * x + 4;
}

double trapesium(double a, double b, int n) {
    double h = (b - a) / n;
    double s = f(a) + f(b);
    double x;

    for (int i = 1; i < n; i++) {
        x = a + i * h;
        s += 2 * f(x);
    }

    return (h / 2) * s;
}

int main() {
    int N;
    printf("Masukkan jumlah blok (trapesium) integrasi: ");
    scanf("%d", &N);

    double nilai = trapesium(-1, 2, N);
    printf("Hasil integral: %.6f\n", nilai);

    return 0;
}