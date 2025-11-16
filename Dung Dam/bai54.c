#include<stdio.h>
int n,c;

void dcs(int a, int b) 
{
	char d[200];
	char cs[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j=0;
	if(a==0)
	{
		printf("0");
		return;
	}
	while(a>0)
	{
		d[j]=cs[a%b];
		j++;
		a=a/b;
	}
	for(j=j-1;j>=0;j--)
		printf("%c",d[j]);
}

int main()
{
	scanf("%d",&n);
	scanf("%d",&c);
	dcs(n,c);
	return 0;
}