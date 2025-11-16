#include <stdio.h>

double giatri(double x, double y) {
    return (x + y) * (x + y);
}

int main() {
    double x, a, n, result;
    printf("Nhap x, a va n: ");
    scanf("%lf %lf %lf", &x, &a, &n);
    if (n == 1) { printf("gia tri can tinh la: %lf", giatri(x, a) + a); }
    else {
        result = giatri(x, a) + (n - 1) * a * a + a;
        printf("gia tri can tinh la: %lf", result);
    }
}