#include<stdio.h>
#include<stdbool.h>
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
float det(int n,float A[n][n])
{
	float t=0;
	if(n==2)
	{
		t=A[0][0]*A[1][1]-A[0][1]*A[1][0];
		return t;
	}
	if(n==3)
	{
		t=((A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1]))-((A[0][2]*A[1][1]*A[2][0])+(A[0][0]*A[1][2]*A[2][1])+(A[0][1]*A[1][0]*A[2][2]));
		return t;
	}
	if(n==1) return A[0][0];
	
	int d,i,j;
	int k=1;
	bool check;
	float tam;
	for(d=0;d<n;d++)
	{
		if (A[d][d]==0)
		{
			check=true;
			for(i=d+1;i<n;i++)
			{
				if (A[i][d]!=0)
				{
					for(j=0;j<n;j++)
					{
						tam=A[d][j];
						A[d][j]=A[i][j];
						A[i][j]=tam;
					}
					k*=-1;
					check=false;
					break;
				}
			}
			if(check==true) return 0;
		}
		else
		{
			for(i=d+1;i<n;i++)
			{
                    float tich=A[i][d]/A[d][d];
                   		for(j=d;j<n;j++)
                        	A[i][j]-=tich*A[d][j];
			}
		}
	}
	t=1;
	for(i=0;i<n;i++)
		t*=A[i][i];
	return t*k;
}

int main()
{
	scanf("%d",&n);
	float A[n][n];
	nhap(n,A);
	xuat(n,A);
	printf("%.2f",det(n,A));
	return 0;
}
