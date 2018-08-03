#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,num,middle;
printf("enter size");
scanf("%d",&size);
int *a=(int *)malloc(size*sizeof(int));
printf("enter elements into array");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter number you want to search\n");
scanf("%d",&num); 
size--;
middle=((0+size)/2);
while(1)
{
if (a[size]>=num)
{
if (a[middle]>num)
{
middle--;
middle=((middle+0)/2);
}
else if (a[middle]<num)
{
middle++;
middle=((middle+size)/2);
}
else if (a[middle]==num)
{
printf("element found\n");
break;
}
else
{
printf("element not found\n");
break;
}
}
else
{
printf("element not found\n");
break;
}
}
}

