#include<stdio.h>
#include<math.h>

int main() {
	char a[1000];
	int count = 0, i, n;
	do {
		count = 0;
		scanf("%s", a);
		n = strlen(a);
		for (i = 0; i < n; i++) {
			if ((a[i] < '0') || (a[i] > '9')) {
				count = 1;
				break;
			}
		}
		if (count == 1) printf("nhap lai: ");
	} while (count == 1);
	
	count = 0;
	for (i = 0; i < n / 2; i++) {
		if (a[i] == a[n - 1 - i]) count ++;
	}
	
	if (count == n / 2) printf("%s la doi xung", a);
	else printf("%s la khong doi xung", a);
	return 0;
}
