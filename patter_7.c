#include<stdio.h>
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=i;j<=n;j++)
                        printf("%d",j);
        printf("\n");
        }
}
