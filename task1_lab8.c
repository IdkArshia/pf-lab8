#include<stdio.h>
int main()
{
	int i,j,n;
	int k=1;
	printf("enter no. of rows and columns for the square matrix:");
	scanf("%d",&n);
	int arr[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("enter element no.%d: ",k);
	    scanf("%d",&arr[i][j]);	
	    k=k+1;
	    //printf("j:%d",&j);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i][i]);
	}
	
	
}