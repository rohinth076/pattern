#include<stdio.h>
long fact(int );
int main()
{
	int n,i,j,k,a;
	long x;
	printf("enter no. of rows");
	scanf("%d",&n);
	a=n;
	for(i=0;i<n;i++)
	{
		for(k=1;k<a;k++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			x = fact(i)/(fact(j) * fact(i-j));
			printf("%ld ",x);
		}
		printf("\n");
		a--;
	}
	return 0;
}

long fact(int n)
{
	int i;
	long f;
	f=1;
	for(i=1;i<=n;i++)
	f = f*i;
	return f;
}
