 #include<stdio.h>
int main()
{
    int a[10],a1[10],i,j;
    printf("Enter numbers in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        a1[i]=a[i];
    }
    printf("values is copied in second array\n");
     for(i=0;i<10;i++)
    {

      printf("a[%d]=%d a1[%d]=%d\n",i,a[i],i,a1[i]);
    }

}

