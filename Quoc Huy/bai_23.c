#include<stdio.h>
#include<math.h>

double cau_a(double a, int n) {
	return pow(a,n);
}

double cau_b(double a, int n) {
	double s = a;
	int i; 
	for (i = 1; i < n; i++) {
		s = s * (a + i);
	}
	return s;
}

double cau_c(double a, int n) {
	double t = 1.0 / a, s = 1.0 / a;
	int i;
	for (i = 1; i <= n; i++) {
		t = t / (a + i); 
        s += t;
	}
	return s;
}

int main() {
	double a;
	int n;
	scanf("%lf", &a);
	scanf("%d", &n);
	printf("%lf\n", cau_a(a, n));
	printf("%lf\n", cau_b(a, n));
	printf("%lf", cau_c(a, n));
	return 0;
}
