#include<stdio.h>
#include<math.h>
int a[100005], n, size = 1, i, j, kq;
void nhap() {
	a[0] = 1;
	for(i = 1; i < 100005; i++) a[i] = 0;
	scanf("%d", &n);
}

void xuli() {
	for (i = 2; i <= n; i++) {
		int carry = 0;
		for (j = 0; j < size; j++) {
			kq = a[j] * i + carry;
			a[j] = kq % 10;
			carry = kq / 10;
		}
		while (carry != 0) {
			a[size] = carry % 10;
			carry = carry / 10;
			size++;
		}
	}
}

void in() {
	for (i = size - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}
}

int main() {
	nhap();
	xuli();
	in();
	return 0;
}
