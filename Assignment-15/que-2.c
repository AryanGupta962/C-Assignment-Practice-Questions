#include<stdio.h>
int smaller(int a[],int size)
{int min=a[1];
for(int i=0;i<size;i++)
if(a[i]<min)
min=a[i];
return min;
}
int main()
{
    system("cls");
    int a[10]={23,56,78,23,11,97,43,167,32,89};
    
    printf("Smaller Number is %d",smaller(a,10));
    return 0;
}