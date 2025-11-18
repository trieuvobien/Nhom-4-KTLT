#include<stdio.h>
int a[100005], n, k;

void nhap() {
	do { 
		scanf("%d", &n);
		if (n <= 0) printf("nhap lai n: ");
	} while (n <= 0);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	do { 
		scanf("%d", &k);
		if (k > n) printf("nhap lai k: ");
	} while (k > n);
}

void xuat() {
	int i;
	for (i = 0; i < n - 1; i++) {
		printf("%d ", a[i]);
	}
}

void xoa() {
	int i;
	for (i = k - 1; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
}

int main() {
	nhap();
	xoa();
	printf("\nmang sau khi xoa phan tu %d la: \n", k);
	xuat();
	return 0;
}
