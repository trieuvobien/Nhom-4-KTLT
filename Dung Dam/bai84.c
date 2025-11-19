#include<stdio.h>
float a[1000][1000];
int n,i,j;
float tong;

void nhap(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf("%f",&a[i][j]);
		}
}
void xuat(float a[1000][1000],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%8.2f ",a[i][j]);
		printf("\n");
	}
}
double khu(float a[1000][1000], int n) 
{
	int d,i,j;
	float tam;
	double det=1.0;
	int dau=1;
	for(d=1;d<=n;d++)
	{
		if (a[d][d]==0)
		{
			int check=d;
			for(i=d+1;i<=n;i++)
			{
				if (a[i][d]!=0)
				{
					check=i;
					for(j=1;j<=n;j++)
					{
						tam=a[d][j];
						a[d][j]=a[i][j];
						a[i][j]=tam;
					}
					dau=-dau;
					break;
				}
			}
			if(check==d) return 0.0;
			d--;
		}
		else
		{
			for(i = d+1; i <= n; i++)
			{
                float tich = a[i][d] / a[d][d];
                for(j = d; j <= n; j++)
                a[i][j] -= tich * a[d][j];
			}
		}
	}
	for (i = 1; i <= n; i++) 
        det *= a[i][i];
    return det*dau;
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
	printf("%.2lf",khu(a,n));
	return 0;
}
