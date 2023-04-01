#include<stdio.h>
int main()
{
    int a,b,c,dis=0;
    printf("Enter value of a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
        printf("roots are real or distinct");
    if(dis==0)
        printf("roots are equal");
    else printf("roots are imaginary %d",dis);
    return 0;
}
