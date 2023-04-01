#include<stdio.h>
struct Employee{
 int id,salary;
 char name[10];
};
int main()
{
 int temp=0,index;
 struct Employee employe[10]={{.salary=33000}
 ,{.salary=30000,.name="rahul"},
 {.salary=200000,.name="rohit"},
 {.salary=21000,.name="rishank"},
 {.salary=220000,.name="varun"},
 {.salary=2400,.name="viran"},
 {.salary=50000,.name="vivek"},
 {.salary=670000,.name="aryan"},
 {.salary=40000,.name="subhi"},
 {.salary=26000,.name="Aditi"}
 };

for(int i=0;i<10;i++)
{
 if(temp<employe[i].salary){
  temp=employe[i].salary;
  index=i;
  }
}
printf("Highest salary Employee is\n%s\nSalary is \n%d",employe[index].name,temp);
}
