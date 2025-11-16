#include <stdio.h>

void xuatMaTran(int n, int a[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int duaMaxLenCheoPhu(int n, int a[n][n]) {
    int tong = 0;
    int trung_gian = 0;
    for (int i = 0; i < n; i++) {
        int max = a[i][0];
        for (int j = 1; j < n; j++) {
            if (a[i][j] > max) {
                trung_gian = max;
                max = a[i][j];
                a[i][j] = trung_gian;
            }
        }
        a[i][n - i - 1] = max;
        tong += max;
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Nhap ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMa tran vua nhap:\n");
    xuatMaTran(n, a);
    int tong = duaMaxLenCheoPhu(n, a);
    printf("\nMa tran sau khi dua max len duong cheo phu:\n");
    xuatMaTran(n, a);
    printf("\nTong cac phan tu lon nhat: %d\n", tong);
    return 0;
}