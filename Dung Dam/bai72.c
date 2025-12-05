#include<stdio.h> 
#include<stdbool.h> 
int m,n; 

void nhap(int m,int n,float A[m][n]) 
{ 
	int i,j; 
	for(i=0;i<m;i++) 
		for(j=0;j<n;j++) 
			scanf("%f",&A[i][j]); 
} 
int khu(int m,int n,float A[m][n])  
{ 
	int d,i,j,hang; 
	bool check; 	
	float tam; 
	for(d=0;(d<m)&&(d<n);d++) 
	{ 
		if (A[d][d]==0) 
		{ 
			check=false; 
			for(i=d+1;i<m;i++) 
			{ 
				if (A[i][d]!=0) 
				{ 
					for(j=0;j<n;j++) 
					{ 
					tam=A[d][j]; 
					A[d][j]=A[i][j]; 
					A[i][j]=tam; 
					}
				check=true; 
				break; 
				}
			}
			if (check==true)  
			{ 
				d--; 
				continue; 
			}
		}
		else 
		{
			for(i=d+1;i<m;i++) 
			{
			    float tich=A[i][d]/A[d][d]; 
			    for(j=d;j<n;j++) 	
			        A[i][j]-=tich*A[d][j]; 
			}
		}
	}
	i=0; 
	j=0; 
	hang=0; 
	while(i<m) 
	{ 
		while(j<n) 
		{ 
			if(A[i][j]!=0) 
			{ 
				hang++; 
				j++; 
				break; 
			}
			else j++; 
		} 
		i++; 
	}
	return hang; 
} 
int main() 
{ 
	scanf("%d %d",&m,&n); 
	float A[m][n]; 
	nhap(m,n,A); 
	printf("%d",khu(m,n,A)); 
	return 0; 
} 
