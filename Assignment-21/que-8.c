#include<stdio.h>
struct Student{
 char name[20];
 char studentclass[10];
 int rollno;
};
 void studentdataInput(struct Student *stud)
{
 printf("Enter your Name\n");
 gets(stud->name);
 fflush(stdin);
 printf("Enter your class\n");
 gets(stud->studentclass);
 fflush(stdin);
 printf("Enter your RollNumber\n");
 scanf("%d",&stud->rollno);
}
void StudentDataDisplay(struct Student stud)
{
 printf("Student name is \n%s\n",stud.name);
 printf("Student name is \n%s\n",stud.studentclass);
 printf("Student name is \n%d\n",stud.rollno);

}
int main()
{
 struct Student s1[10];
 for(int i=0;i<1;i++)
 {
  studentdataInput(&s1[i]);
 }
 for(int i=0;i<1;i++)
 {
  StudentDataDisplay(s1[i]);
 }
}
