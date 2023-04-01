#include <stdio.h>
int reverse(int a[], int size)
{
    printf("Numbers in Reverse order\n");
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", a[i]);
}
int main()
{
    system("cls");
    int a[10] = {23, 56, 78, 23, 11, 97, 43, 167, 32, 89};
    reverse(a, 10);
    return 0;
}