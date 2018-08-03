#include<stdio.h>
int main()
{
float a[10],max,min,mean=0;
int i,k=0;
printf("Eenter values of rainfall");
for(i=0;i<7;i++)
{
scanf("%f",&a[i]);
}
for(i=0;i<7;i++)
{
if(max<a[i])
{
max=a[i];
}
}
for(i=0;i<7;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("the range of rainfall is in betweeen%f--%f",max,min);
for(i=0;i<7;i++)
{
mean=mean+a[i];
}
mean=mean/7;
printf("the mean of rainfall is%f\n",mean);
for(i=0;i<7;i++)
{
if(a[i]<mean)
{
k++;
}
}
printf("the number of days rainfall is lesthan mean is%d",k);
}
