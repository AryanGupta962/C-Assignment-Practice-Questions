
#include<stdio.h>
struct Employee
{
 int id,salary;
 char name[10];
};

struct Employee TakeEmployeeData(struct Employee *e1)
{
  printf("Enter Employe name\n");
 gets(e1->name);
 printf("Enter Employe Id\n");
 scanf("%d",&e1->id);
 printf("Enter Salay of Employee\n");
 scanf("%d",&e1->salary);

}

int main()
{
struct Employee e1;
 TakeEmployeeData(&e1);
 printf("\nEmployee Data is\n");
printf("name=%s\nId=%d\nsalary=%d",e1.name,e1.id,e1.salary);

}
