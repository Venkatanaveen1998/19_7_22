#include<stdio.h>
int k=0;
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
		if(i%2!=0)
			k=++k;
                for(j=1;j<=i;j++)
                {
			if(i%2==0)
                        printf("*");
			else
			printf("%d",k);
			
                }
        printf("\n");
        }
}
