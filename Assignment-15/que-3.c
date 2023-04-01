#include<stdio.h>
int sort(int a[],int size)
{
    int cont;
for(int i=0;i<size;i++)
for(int j=i+1;j<size;j++)
if(a[i]>a[j]){
cont=a[i];
a[i]=a[j];
a[j]=cont;}

}
int main()
{
    system("cls");
    int a[10]={23,56,78,23,21,97,43,167,32,89};
    sort(a,10);
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}