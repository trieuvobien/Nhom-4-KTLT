#include <stdio.h>
void nhap(int a[], int n){
	printf("Nhap cac gia tri: ");
	for (int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if (a[i]<0) {
			printf("Gia tri vua nhap khong hop le. Nhap lai");
			i--;
		}
	}
}

int dem0(int a[], int n){
	int so2=0, so5=0;
	for(int i=1;i<n;i++){
		if (a[i]==0){
			return 1;
		}
		int so=a[i];
		while(so%2==0){
			so2++;
			so=so/2;
		}
		while(so%5==0){
			so5++;
			so=so/5;
		}
	}
	if (so2<so5){
		return so2;
	} else{
		return so5;
	}
}

int main(){
	int n, so0;
	printf("Nhap so luong so: ");
	scanf("%d", &n);
	if (n<=0){
		printf ("So luong phai lon hon 0.");
	}else {
		int a[n];
		nhap(a, n);
		so0= dem0(a, n);
		printf("So cac so 0 tan cung cua tich cac so da nhap la: %d", so0);
	}
	return 0;
}
