#include<stdio.h>
int main()
{
	int r,i,j,t;
	printf("enter r");
	scanf("%d",&r);
	t=64+r;
	for(i=65;i<65+r;i++)
{
	 
	for(j=65;j<65+r;j++)
	if(j==i)
	printf("%c",j);
	else if(j==t)
	printf("%c",j);
	else
	printf(" ");
	printf("\n");
	t--;
}
return(0);
}
