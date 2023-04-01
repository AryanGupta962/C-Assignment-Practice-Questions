#include <stdio.h>
int main()
{
    int a[][4] = {{1, 2, 9, 0}, {0, 0, 1, 0}, {3, 0, 0, 5}, {0, 4, 1, 0}}, count = 0;
    
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (a[i][j] == 0)
                count++;
            if (count >= (16/ 2))
            {
                printf("Matrix is sparse");
                return 0;
            }
        }
    }
    printf("Matrix is not Sparse");
   
}