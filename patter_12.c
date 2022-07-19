#include<stdio.h>
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
                for(j=1;j<=i;j++)
                {
                        printf("%c",96+i);
                }
        printf("\n");
        }
}
