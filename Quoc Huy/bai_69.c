#include<stdio.h>
int a[100005], n, k;

void nhap() {
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
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
	xuat();
	return 0;
}
