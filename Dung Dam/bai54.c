#include<stdio.h>
#include<math.h>
double n;
int c;

void dcs(double a, int b)
{
	char d[300];
	char cs[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i=0;
	if(a==0)
	{
		printf("0");
		return;
	}
	long long c=(long long)a;
	a-=c;
	while(c>0)
	{
		d[i]=cs[c%b];
		i++;
		c/=b;
	}
	for(i=i-1;i>=0;i--)
		printf("%c",d[i]);
	if(a==0) return;
	else
	{
		printf(".");
		i=10;
		while((a>0) && (i>0))
		{
			a*=b;
			printf("%c",cs[(int)a]);
			a-=(int)a;
			i--;
		}
	}
}
int main()
{
	scanf("%lf %d",&n,&c);
	while(c<2 || c>36)
	{
		printf("Vui long nhap lai co so muon doi");
		scanf("%d",&c);
	}
	if(n<0) printf("-");
	dcs(fabs(n),c);
	return 0;
}
