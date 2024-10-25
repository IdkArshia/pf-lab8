#include<stdio.h>
int main()
{
	int r,c,i,j,k,mr,mc;
	int max=0;
	k=1;
	printf("enter number of rows: ");
	scanf("%d",&r);
	printf("enter number of columns: ");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter element no.%d: ",k);
	    scanf("%d",&arr[i][j]);	
	    if(arr[i][j]>max)
	    {
	    	max=arr[i][j];
	    	mr=i;
	    	mc=j;
		}
	    k=k+1;
		}
	}
	
	printf("maximum number in the matrix is: %d in row:%d and column: %d",max,mr,mc);
	
}