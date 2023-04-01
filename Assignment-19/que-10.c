#include<stdio.h>
int main()
{
    int i;
    char name[5][10],password[5][10],lname[10],lpassword[10];
    printf("Enter name and password for signup\n");
    getch();
    for( i=0;i<5;i++)
    { system("cls");
    printf("Enter Data of %d User\n",i+1);
    printf("Name-");
    gets(name[i]);
    printf("Password-");
    gets(password[i]);
    }
    system("cls");
    printf("Enter Credential for Login\n");
    printf("Name-");
    gets(lname);
    printf("Password-");
    gets(lpassword);
    for( i=0;i<5;i++)
    {
    if(strcmp(name[i],lname)==0&&strcmp(password[i],lpassword)==0)
    {
        printf("You are Succesfully logged in !");
        break;
    }
    }
    if(i==6)
    printf("Wrong Credential Entered");
}