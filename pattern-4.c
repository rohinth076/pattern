#include<stdio.h>
main()
{
	int r,n,i,j,k,l;
	printf("enter r \n");
	scanf("%d",&r);
	n=r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<2*n;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d ",k);
		for(l=i;l>1;l--)
		printf("%d ",l-1);
	printf("\n");
	n--;
	}
	return 0;
}
