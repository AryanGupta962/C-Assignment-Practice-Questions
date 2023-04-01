#include<stdio.h>
int greater(int a[],int size)
{int max=0;
for(int i=0;i<size;i++)
if(a[i]>max)
max=a[i];
return max;
}
int main()
{
    system("cls");
    int a[10]={23,56,78,23,21,97,43,167,32,89};
    
    printf("Greater Number is %d",greater(a,10));
    return 0;
}