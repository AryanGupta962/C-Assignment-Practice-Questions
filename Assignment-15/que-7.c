#include <stdio.h>
int occur(int a[], int size)
{
    int hash[200] = {0};
    for (int i = 0; i < size; i++)
        hash[a[i]]++;
    printf("Numbers which occurs two times in array\n");
    for (int i = 0; i < 200; i++)
        if (hash[i] == 2)
            printf("%d is occur %d times\n", i, hash[i]);
}
int main()
{
    int number;
    system("cls");
    int a[] = {23, 11, 78, 23, 11, 97, 43, 167, 11, 89, 23, 78, 167};
    occur(a, 13);

    return 0;
}