#include <stdio.h>

int so_hoan_hao(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) tong += i;
    }
    return tong == n;
}

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("\ncau a:\n");
    for (int i = 0; i < n; i++) printf(" %d", a[i]);

    printf("\ncau b:\n");
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!so_hoan_hao(a[i])) {
            a[j++] = a[i];
        }
    }
    for (int i = 0; i < j; i++) printf(" %d", a[i]);

    return 0;
}