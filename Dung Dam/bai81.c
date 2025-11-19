#include<stdio.h>
float a[1000][1000];
int n,i,j;
float tong;

void nhap(int n)
{
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf("%f",&a[i][j]);
		}
}
void xuat(float a[1000][1000],int n)
{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%8.2f ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	tong=0;
	printf("Ma tran cap: ");
	scanf("%d",&n);
	nhap(n);
	printf("a) \n");
	xuat(a,n);
	printf("b) \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			if(a[i][j]<a[i][n+1-i]) a[i][n+1-i]=a[i][j];
		tong+=a[i][n+1-i];
	}
	xuat(a,n);
	printf("Tong cac phan tu  nho nhat cua moi hang la: %f",tong);
	return 0;
}