#include<stdio.h>
main()
{ 
	int n,r,i,j,k,l;
	printf("enter r\n");
	scanf("%d",&r);
	n=r;
	for(i=1;i<=r;i++)
	{
		for(k=1;k<2*n;k++)
		printf(" ");
		for(j=1;j<i;j++)
		printf("%d ",j);
		for(l=j;l>=1;l--)
		printf("%d ",l);
		printf("\n");
		n--;
	}
	return 0;
}
