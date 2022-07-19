#include<stdio.h>
int main()
{
	int i,j,n;
	printf("which number pattern want to be check\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
			printf("%d",j);
	printf("\n");
	}
}
