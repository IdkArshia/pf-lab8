#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter an odd number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i-=2)
	{
		for(j=i;j>=1;j-=2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}