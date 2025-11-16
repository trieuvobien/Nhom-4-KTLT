#include <stdio.h>
#include <math.h>

int main() {
    double x,result;
    printf("Nhap vao mot so thuc x: ");
    scanf("%lf", &x);
    double tu  = 1.0;
    double mau = 1.0;
    for (int n = 2 ; n <= 64; n = n + 2) {
        tu = (x - n) * tu;
        mau = (x - n - 1) * mau;
    }
    result = tu / mau;
    printf("Gia tri cua bieu thuc la: %.6lf\n", result);
    return 0;
}