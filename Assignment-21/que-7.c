#include<stdio.h>
struct time_diff
{
 int hour,minute,second;
};

int main(){
struct time_diff time1,time2,tdiff;

printf("Enter Hour time1\n");
scanf("%d",&time1.hour);
printf("Enter Hour time2\n");
scanf("%d",&time2.hour);

printf("Enter Minute time1\n");
scanf("%d",&time1.minute);
printf("Enter Minute time2\n");
scanf("%d",&time2.minute);

printf("Enter Second time1\n");
scanf("%d",&time1.second);
printf("Enter Second time2\n");
scanf("%d",&time2.second);

if(time1.second>time2.second){
tdiff.second=time1.second-time2.second;
}
else
{
 time1.second+=60;
 time1.minute--;
 tdiff.second=time1.second-time2.second;
}

if(time1.minute>time2.minute){
tdiff.minute=time1.minute-time2.minute;
}
else
{
 time1.minute+=60;
 time1.hour--;
 tdiff.minute=time1.minute-time2.minute;
}
tdiff.hour=time1.hour-time2.hour;
printf("Difference is :\n%d:%d:%d",tdiff.hour,tdiff.minute,tdiff.second);
}
