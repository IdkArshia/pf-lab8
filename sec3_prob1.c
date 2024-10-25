#include <stdio.h>

int main()
{

    int matrix[2][3][3] = {
        {
            {1, 2, 3},{4, 5, 6},{7, 8, 9}
            
        },
    {
        {10, 11, 12},{13,14,15},{16, 17, 18}
        
    }
        
    };

    int sum_1 = 0, sum_2 = 0;


    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            sum_1 += matrix[0][i][j];
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            sum_2 += matrix[1][i][j];
        }
    }

    printf("Page 1 sum: %d\n", sum_1);
    printf("Page 2 sum: %d\n", sum_2);

    return 0;
}