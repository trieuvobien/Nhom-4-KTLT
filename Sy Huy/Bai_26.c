#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("nhap vao so thuc x");
    scanf("%lf", &x);
    
    double ketQua = 1.0;

    for(int k = 1; k <= 32; k++) {
        double tu = x - 2.0 * k;
        double mau = x - 2.0 * k - 1.0;
        
        if(fabs(soLe) < 1e-12) {
            printf("Mau so bang 0\n");
            return 0;
        }
        ketQua *= tu / mau;
    }
    printf("%.10f\n", ketQua);
    return 0;
}
