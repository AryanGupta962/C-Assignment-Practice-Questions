#include <stdio.h>
int main()
{
    int a[3][3] = {{3, 2, 3}, {4, 5, 6}, {7, 8, 9}},sum=0;
    printf("sum of left diagonals matrix\n");
    for (int i = 2; i >=0; i--)
    {
      sum+=a[i][i];
    }
    printf("%d",sum);
}