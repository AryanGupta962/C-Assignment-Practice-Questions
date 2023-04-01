#include<stdio.h>
int main()
{

  float units,t_bill=0;
  printf("Enter Units to calculate Electricity bill\n");
  scanf("%f",&units);
  switch(units>=1){
  case 1:
  switch(units<=50)
  {case 1:
   t_bill=units*0.50;
   printf("Total bill is Rs=%.2f",t_bill);
   break;
   case 0:
 switch(units>50&&units<=150)
 {
 case 1:
  t_bill=units*0.75;
  printf("Total bill is Rs=%.2f",t_bill);
  break;
 case 0:
  switch(units>150&&units<=250)
  {
 case 1:
  t_bill=units*1.20;
  printf("Total bill is Rs=%.2f",t_bill);
  break;
 case 0:
  switch(units>250)
  {
  case 1:
   t_bill=units*1.50;
   t_bill=t_bill+(t_bill*20/100);
  printf("Total bill is Rs=%.2f including 20%% surcharge",t_bill);
  break;

  }
  }
 }
  }
  break;
  case 0:
   printf("Units is not be 0 or in less than 0");
  }
    return 0;
}
