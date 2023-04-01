#include<stdio.h>
#include<string.h>
int main()
{    system("cls");
     int min ,max,j,d;
char str[5][20]={"hello","aryan","where","are","you"},str1[20],str2[20];
printf("Enter string1 where you start\n");
gets(str1);
printf("Enter string2 where you want find distance\n");
gets(str2);

for(int i=0;i<5;i++){
for(j=0;str[i][j]!='\0';j++)
{   if(strlen(str[i])==strlen(str1)){
    if(str[i][j]!=str1[j])
    {
        min=NULL;
        break;
    }

    }
    else 
    {
        min=NULL;
        break;
    
    }

}
if(str[i][j]=='\0'){
min=i;
break;
}
}



for(int i=0;i<5;i++){
for( j=0;str[i][j]!='\0';j++)
{   if(strlen(str[i])==strlen(str2)){
    if(str[i][j]!=str2[j])
    {
        max=NULL;
        break;
    }
    }else {
        max=NULL;
        break;
    }

}
  if(str[i][j]=='\0'){
max=i;
break;
}  

}
if(min==NULL&&max==NULL)
printf("%s and %s both is not found in String Array",str1,str2);
else if(max==NULL)
printf("%s is not found in String Array",str2);
else 
if(min==NULL)
printf("%s is not found in String Array",str1);
else{
++min;
if(max!=NULL&&min!=NULL)
{
    d=max-min;
    printf("Distance from %s to %s is %d",str1,str2,d);

} 
}
}