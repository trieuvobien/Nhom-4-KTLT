#include<stdio.h>
int n;
void nhap(int n,float A[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%f",&A[i][j]);
}
void xuat(int n,float A[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%.2f ",A[i][j]);
		printf("\n");
	}
	
}
float dcp(int n,float A[n][n])
{
	float t=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		float min=A[i][0];
		for(j=1;j<n;j++)
			if (A[i][j]<min) min=A[i][j];
		A[i][j-i-1]=min;
		t+=min;
	}
	return t;
}
int main()
{
	scanf("%d",&n);
	float A[n][n];
	nhap(n,A);
	xuat(n,A);
	printf("%.2f",dcp(n,A));
	return 0;
}
