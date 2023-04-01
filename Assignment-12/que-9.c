void fun(int n)
{static int i=0;
if(n!=0){
   i=i+n%10;
   n=n/10;
     if(n==0)
    printf("%d",i);}
    i*=10;

   if(n!=0)
    fun(n);


}
int main()
{
    int n;
 printf("Enter a number to print reverse a number");
 scanf("%d",&n);
 fun(n);

}
