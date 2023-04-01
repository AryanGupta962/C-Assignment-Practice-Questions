#include<stdio.h>
void sort(int *ar,int size)
{
    int hash[1000]={0},c=0;
    for(int i=0;i<size;i++)
    hash[ar[i]]++;
    for(int i=0;i<1000;i++)
    {
        if(hash[i]==1)
        ar[c++]=i;
       else if(hash[i]>1)
        while(hash[i]){
        ar[c++]=i;
        hash[i]--;}
    }

}
int main()
{
    int arr[20]={12,45,11,4,5,7,9,2,1,2,6,7,34,21,456,78,98,459};
    printf("--we are caling sort function to sort our pre define array--");
    sort(arr,20);
    for(int i=0;i<20;i++)
    printf("%d ",arr[i]);
}