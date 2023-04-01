#include<stdio.h>
int occurence(int a[],int size,int number)
{
    int count=0;
    for(int i=0;i<size;i++)
    if(a[i]==number)
    count++;
    return count;
}
int main()
{   int number;
    system("cls");
    int a[10]={23,11,78,23,11,97,43,167,11,89};
    printf("Enter a number to finds it,s Occurence\n");
    scanf("%d",&number);
    printf("Occurence of %d is %d",number,occurence(a,10,number));
    return 0;
}