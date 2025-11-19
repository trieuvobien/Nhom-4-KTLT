#include<stdio.h>
#include<math.h>
int cp(int x) {
	if(x < 0) return 0;
	int k = sqrt(x);
	return k*k==x;
}
void nhap(int a[100], int n) {
	for(int i = 0; i < n;i++) {
		scanf("%d", &a[i]);
	}
}
void xuat(int a[100], int n) {
	for(int i = 0; i < n;i++) {
		printf("%d ", a[i]);
	} printf("\n");
}
void xuatcpvatong(int a[100], int n) {
	int tong = 0;
	printf("Cac so chinh phuong cua mang:");
	for(int i = 0; i < n; i++) {
		if (cp(a[i])) {
			printf("%d ", a[i]);
		  tong += a[i];
	      }
    }
	 printf("\n");
	printf("Tong so chinh phuong la: %d", tong);
}
int main() {
    int n;

    printf("Nhap so luong phan tu N: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang:");
    int a[n];
    nhap(a, n);
    //Cau a
    printf("a)");
    xuat(a, n);
    //Cau b
    printf("b)");
    xuatcpvatong(a, n);
    return 0;
}
