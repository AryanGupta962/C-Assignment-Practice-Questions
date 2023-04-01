
#include<stdio.h>
struct Employee{
 int id,salary;
 char name[10];
};
int main()
{
 struct Employee temp,employe[10]={{.salary=33000,.name="raman"}
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
 for(int j=i+1;j<10;j++){
 if(employe[i].salary>employe[j].salary){
 temp.salary=employe[i].salary;
 employe[i].salary=employe[j].salary;
 employe[j].salary=temp.salary;

 strcpy(temp.name,employe[i].name);
 strcpy(employe[i].name,employe[j].name);
 strcpy(employe[j].name,temp.name);
  }
 }
}
printf("Employee Data Salary wise\n");
for(int i=0;i<10;i++)
 printf("Name=%s Salary=%d\n",employe[i].name,employe[i].salary);
//printf("Highest salary Employee is\n%s\nSalary is \n%d",employe[index].name,temp);
}
