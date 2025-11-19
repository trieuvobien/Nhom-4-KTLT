#include<stdio.h>
float mt[1000][1000];
int m,n,i,j,kq;

int khu(float a[1000][1000], int m, int n) 
{
	int d,c,t,hang;
	float tam;
	if(m>=n) hang=n;
	else hang=m;
	for(d=1;d<=hang;d++)
	{
		if (a[d][d]==0)
		{
			t=1;
			for(i=d+1;i<=m;i++)
			{
				if (a[i][d]!=0)
				{
					for(j=1;j<=n;j++)
					{
						tam=a[d][j];
						a[d][j]=a[i][j];
						a[i][j]=tam;
					}
					t=0;
					break;
				}
			}
			if(t==1)
			{
				hang--;
				for (i=1;i<=m;i++)
					a[i][d]=a[i][hang];
			}
			d--;
		}
		else
		{
			for(int i = 1; i <= m; i++)
			{
                if(i!=d) 
				{
                    float tich = a[i][d] / a[d][d];
                   		for(int j = 1; j <= n; j++)
                        	a[i][j] -= tich * a[d][j];
				}
			}
		}
	}
	return hang;
}

int main()
{
	printf("So dong: ");
	scanf("%d",&m);
	printf("So cot: ");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf("%f",&mt[i][j]);
		}
	kq=khu(mt,m,n);
	printf("%d",kq);
	return 0;
}