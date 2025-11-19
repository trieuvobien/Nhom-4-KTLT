#include<stdio.h>
#include<math.h>

int main() {
	int a[100005], n, size = 1, i, j, kq;
	for(i=0; i<100005; i++) a[i] = 0;
	a[0] = 1;
	
	scanf("%d", &n);
	
	if ((n == 0) || (n == 1)) {
		printf("1");
		return 0;
	}
	
	
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
	
	for (i = size - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}
	
	return 0;
}
