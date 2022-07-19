#include<stdio.h>
int k=0;
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=i;j>0;j--)
                {k=++k;
                        printf("%d ",k*k);
                }
        printf("\n");
        }
}
