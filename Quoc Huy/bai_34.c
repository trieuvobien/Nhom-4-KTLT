#include<stdio.h>
#include<math.h>
char a[1000];
int count = 0, i, n;
void kt() {
	count = 0;
	for (i = 0; i < n / 2; i++) {
		if (a[i] == a[n - 1 - i]) {
			count ++;
		}
	}
	if (count == n / 2) printf("%s tu doi xung", a);	
	else printf("%s la khong doi xung", a);
}
int main() {
	scanf("%s", a);
	n = strlen(a);
	kt();
	return 0;
}
