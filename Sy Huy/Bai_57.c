#include <stdio.h>
#include <math.h>

int so_hoan_hao(int n) {
    int tong = 0;
    for (int i = 1; i < n;i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    if (tong == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    //cau a
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\ncau a:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    
    //cau b
    printf("\ncau b:\n");
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (so_hoan_hao(a[i]) == 1) {
            dem++;
        }
    }
    int m = n - dem;
    int b[m];

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (so_hoan_hao(a[i]) == 0) {
                b[j] = a[i];
                printf(" %d", b[j]);
            }
        }
    }

    return 0;
}