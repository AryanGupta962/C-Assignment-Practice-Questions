#include <stdio.h>
int main()
{
    int a[][4] = {{1, 2, 1, 1}, {0, 8, 0, 1}, {3, 1, 1, 5}, {1, 9, 4, 1}}, previous = 0, current = 0, tracker = 0;

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (i == 0){
                if (a[i][j] == 1)
                    previous++;}
                else if (a[i][j] == 1)
                    current++;
        }
        if (current > previous)
        {
            tracker = i;
            previous = current;
        }
        current=0;
    }
    printf("%d row has maximum 1's", tracker);
}