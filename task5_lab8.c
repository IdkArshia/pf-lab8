#include <stdio.h>

int main() {
    int mat[3][3];
    //taking input from user
int i,j;
for (i = 0; i < 3; i++) 
{
      
    for (j = 0; j < 3; j++) 
	{ 
       printf("enter number: ");
       scanf("%d",&mat[i][j]);
    }
}
//displaying matrix
    printf("Matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++)
		{
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int min_row, col_max;


    for (i = 0; i < 3; i++) 
	{
        //finding smallest in row
        min_row = mat[i][0];
        for (j = 1; j < 3; j++) 
		{
            if (mat[i][j] < min_row) 
			{
                min_row = mat[i][j];
            }
        }

        for (j = 0; j < 3; j++) 
		{
            //finding the column at min number of the row is
            if (mat[i][j] == min_row) 
			{
                col_max = 1;
                //checking if the value is largest in column
                for (int k = 0; k < 3; k++) 
				{
                    if (mat[k][j] > mat[i][j]) 
					{
                        col_max = 0;
                        break;
                    }
                }
                if (col_max==1) 
				{
                    printf("Saddle point: %d at (%d, %d)\n", min_row, i + 1, j + 1);
                }
            }
        }
    }

    return 0;
}