#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}, result[3][3]={0};
    printf("Multiplication of already declared matrix is\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            for (int k = 0; k <= 2; k++)
            {
                result[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}