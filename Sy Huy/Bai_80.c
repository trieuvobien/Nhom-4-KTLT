#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[505][505];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
    
    long long tong = 0;
    
    for (int i = 0; i < n; i++) {
        int pos_max = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] > a[i][pos_max]) {
                pos_max = j;
            }
        }
        
        int cheo_phu = n - i - 1;  // cột của đường chéo phụ ở dòng i
        
        if (pos_max != cheo_phu) {
            long long tmp = a[i][pos_max];
            a[i][pos_max] = a[i][cheo_phu];
            a[i][cheo_phu] = tmp;
        }
        
        tong += a[i][cheo_phu];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    printf("%lld\n", tong);
    
    return 0;
}
