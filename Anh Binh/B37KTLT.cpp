#include <stdio.h>
int main(){
	int i, n, tich, scp;
	printf("Nhap N: ");
	scanf("%d", &n);
	if ((n<0)||(n>7000000)){
		printf("Gia tri N khong hop le.");
		return 1;
	} else if(n==0){
		printf("N=0");
		return 2;
	}
	printf("%d=", n);
	while(n>0){
		i=1;
		while(i*i<=n) i++;
		tich=(i-1)*(i-1);
		scp=i;
		printf("%d^2", scp);
		n=n-tich;
		if(n>0) printf("+");
	}
	return 0;
}
