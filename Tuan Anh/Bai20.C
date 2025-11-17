#include <stdio.h>
int kiemtra(int n) {
    int a = n / 10;
    int b = n % 10;
    int tong = a*a*a + b*b*b;
    int binhphuong = n * n;
    if (binhphuong == tong)
        return 1;
    return 0;
}
int main() {
    int n;
    printf("Nhap n (n <= 99): ");
    scanf("%d", &n);
    if (kiemtra(n) == 1)
        printf("n^2 bang tong lap phuong cac chu so cua n.\n");
    else
        printf("n^2 KHONG bang tong lap phuong cac chu so cua n.\n");

    return 0;
}
