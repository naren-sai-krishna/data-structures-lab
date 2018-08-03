#include<stdio.h>
#include<stdlib.h>
float main()
{
float a,w;
printf("enter poojas acccount balance");
scanf("%f",&a);
printf("enter poojas withdrawal amount");
scanf("%f",&w);
if(((int)a%5==0)&&(w<a))
{
printf("the current account balance is %f\n",a);
}
else if(((int)a%5!=0)||(w>=a))
{
printf("cannot withdraw amount");
}
a=a-(w+.50);
printf("the withdrwal amount is %f",w+.50);
printf("the balance after withdrawal is %f\n",a);
}
