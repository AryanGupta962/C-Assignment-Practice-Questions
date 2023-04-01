#include <stdio.h>
int sort(int a[], int size, int shift, int times)
{
    int cont;
    if (shift == 2)
    {
        for (int i = 1; i <= times; i++)
        {
            cont = a[size - 1];
            for (int j = size - 1; j >= 1; j--)
                a[j] = a[j - 1];

            a[0] = cont;
        }
    }
    else if (shift == 1)
    {
        for (int i = 1; i <= times; i++)
        {
            cont = a[0];
            for (int j = 0; j < size - 1; j++)
                a[j] = a[j + 1];

            a[size - 1] = cont;
        }
    }
}
int main()
{
    int shift, times;

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter direction for by which you want to shift \n1. Left Shift\n2. Right Shift\n");
    scanf("%d", &shift);
    printf("\nEnter how many times to shift array by direction\n");
    scanf("%d", &times);
    sort(a, 10, shift, times);
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}