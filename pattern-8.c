#include<stdio.h>
int main()
{
	int n,a,b,i,j,k,l,c;
	printf("enter no. of rows");
	scanf("%d",&n);
	a=0;
	b=n;
	c=65+b;
	for(j=1;j<=n;j++)
	{
		for(i=65;i<=64+b;i++)
		printf("%c ",i);
		for(k=1;k<2*a-1;k++)
		printf(" ");
		if(i==c)
		i--;
		i--;
		for(l=i;l>=65;l--)
		printf("%c ",l);
		printf("\n");
		a=a+2;
		b--;
	}
	return 0;
	
}
