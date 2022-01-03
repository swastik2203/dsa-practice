#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {if (i%2==0)
    {
        printf("\n");
        continue;
    }
    
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {if (i%2==0)
    {
        printf("\n");
        continue;
    }
        for(j=1;j<=(n-i);j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
}