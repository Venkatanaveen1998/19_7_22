#include<stdio.h>
int k=-1;
int main()
{
        int i,j,n;
        printf("which number pattern want to be check\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
		k=++k;
                for(j=1;j<=i;j++)
                {
                       if(j%2==0)
			      printf(" %d",-k);
		       else printf(" %d",k);
		        
                }
        printf("\n");
        }
}
