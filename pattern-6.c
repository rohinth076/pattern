#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter no. of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ",(i+j)%2);
		printf("\n");
	}
	return 0;
}
