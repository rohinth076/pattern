#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,v,m,a,i,j,k,l,b;
    scanf("%d", &n);
     m=2*n-1;
     l=n;
     v=n;
      for(i=1;i<=n;i++)
       {
         for(k=1;k<i;k++)
         printf("%d ",n-(k-1));
           for(j=1;j<m-2*(i-1);j++)
            printf("%d ",l);        
            b=l;

            for(a=b;a<=n;a++)
            printf("%d ",a); 
            printf("\n");
            l--;
       }
       l=l+2;
       for(i=1;i<n;i++)
       {
        for(k=1;k<=n-2-(i-1);k++)
        printf("%d ",n-(k-1));
        for(j=1;j<=3+(2*(i-1));j++)
        printf("%d ",l);
        b=l+1;
        for(a=b;a<=n;a++)
        printf("%d ",a);
        printf("\n");
       l++;
       }
}
    



