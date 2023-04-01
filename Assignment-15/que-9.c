#include <stdio.h>
int merger(int a[], int size, int a1[], int size1, int merge[], int size2)
{
    int i = 0, j = 0;
    for (int k = 0; k < size2; k++)
    {
        if(i==6&&j<5)
        {
          for(;j<=5;j++)
         

          merge[k]=a1[j];

        }else

        if(j==6&&i<5)
        {
          for(;i<=5;i++)
           
          merge[k]=a[i];
        }else
        if (a[i] > a1[j])
        {
            merge[k] = a[i];
            i++;
        }
        else if (a1[j] > a[i])
        {
            merge[k] = a1[j];
            j++;
        }
    }

  
}
int main()
{
    int number;
    system("cls");
    int a[] = {15, 13, 11, 5, 3, 1}, a1[] = {18, 12, 9, 8, 6, 2}, merge[12] = {0};
    merger(a, 6, a1, 6, merge, 12);
    printf("After merge a and a1 array\n");
    for (int i = 0; i < 12; i++)
        printf("%d ", merge[i]);
    return 0;
}
