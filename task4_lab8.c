#include<stdio.h>
int main()
{
	int i,j,r,c;
	int k=1;
	printf("enter number of rows: ");
	scanf("%d",&r);
	printf("enter number of columns: ");
	scanf("%d",&c);
	int arr[r][c], arr2[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter element no.%d: ",k);
	    scanf("%d",&arr[i][j]);	
	    k=k+1;
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			arr2[i][j]=arr[j][i];
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
}