#include<stdio.h>
int a[100005], n;

int sx(const void *a, const void *b) {
	return (*(long long*)b - *(long long*)a);
}

void nhap() {
	do { 
		scanf("%d", &n);
		if (n <= 0) printf("nhap lai: ");
	} while (n <= 0);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

void xuat() {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main() {
	nhap();
	printf("mang truoc khi sap xep la: \n");
	xuat();
	qsort(a, n, sizeof(int), sx);	
	printf("\nmang sau khi sap xep giam dan la: \n");
	xuat();
	return 0;
}
