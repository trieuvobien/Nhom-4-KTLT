#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);
    if (n < 0 || n > 7000000) {
        printf("Gia tri N khong hop le.");
        return 1;
    }
    if (n == 0) {
        printf("N=0");
        return 2;
    }
    int sl[n + 1];
    int nho[n + 1];
    for (int i = 0; i <= n; i++) {
        sl[i] = i;
        nho[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (sl[i] > sl[i - j * j] + 1) {
                sl[i] = sl[i - j * j] + 1;
                nho[i] = j;
            }
        }
    }
    printf("%d = ", n);
    int n1 = n;
    while (n1 > 0) {
        int sohang = nho[n1];
        printf("%d^2", sohang);
        n1 -= sohang * sohang;
        if (n1 > 0) {
            printf(" + ");
        }
    }
    return 0;
}
