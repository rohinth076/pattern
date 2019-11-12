#include<stdio.h>
main()
{ 
	int n,r,i,j,k,l,a;
	printf("enter r\n");
	scanf("%d",&r);
	n=r;
	for(i=1;i<=r;i++)
	{
		a=i;
		for(k=1;k<2*n;k++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a--;
		}
		for(l=2;l<=i;l++)
		printf("%d ",l);
		printf("\n");
		n--;
	}
	return 0;
}
