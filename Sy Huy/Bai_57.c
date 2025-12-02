#include <stdio.h>

int so_hoan_hao(int n) {
    if (n <= 1) return 0;
    int sum = 1;                             // 1 luôn là ước
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("cau a:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("cau b:\n");
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!so_hoan_hao(a[i])) {
            a[cnt++] = a[i];
        }
    }
    for (int i = 0; i < cnt; i++) {
        printf("%d ", a[i]);
    }
    if (cnt == 0) printf("\n");
    else printf("\n");

    return 0;
}
