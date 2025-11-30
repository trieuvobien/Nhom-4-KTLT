#include<stdio.h>
int a[100005], n;

int sx(const void *a, const void *b) {
	return (*(long long*)b - *(long long*)a);
}

void nhap() {
	scanf("%d", &n);
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
	qsort(a, n, sizeof(int), sx);	
	xuat();
	return 0;
}
