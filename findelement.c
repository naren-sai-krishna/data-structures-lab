#include<stdio.h>
int main()
{
int a[100],n,s,i,count=0;
printf("enter number of elements in an array:");
scanf("%d",&n);
printf("enter elements into array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to find in array:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(s==a[i])
{
count=1;
break;
}
else
count=0;
}
if(count==1)
{
printf("%d is found",s);
}
else
printf("%d is not found",s);

}
