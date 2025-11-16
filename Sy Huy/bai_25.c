#include <stdio.h>
#include <math.h>


double tinhGiaTri(double x, double a, int n) {
    double result = pow(x + a, 2);
    for (int i = 1; i < n; i++) {
        result = result + pow(a, 2);
    }
    result = result + a;
    return result;
}

int main() {
    double x, a;
    int n;

    printf("Nhap x, a va n: ");
    scanf("%lf %lf %d", &x, &a, &n);

    double ketQua = tinhGiaTri(x, a, n);
    printf("Gia tri bieu thuc la: %.2lf\n", ketQua);

    return 0;
}