#include<stdio.h>
#include<math.h>
int nto(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
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
int ntocuoicung(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (nto(a[i])) {
            return a[i];
        }
    }
    return -1;
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
    if (ntocuoicung(a, n) == -1) 
    	printf("Khong co so nguyen to trong mang.\n");
	else
	    printf("So nguyen to cuoi cung trong mang la: %d\n", ntocuoicung(a, n));
    return 0;
}
