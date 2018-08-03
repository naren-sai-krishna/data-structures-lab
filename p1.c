#include<stdio.h>
int i,n,c=0;
int a[100];
void input()
{
printf("enter the size of array");
scanf("%d",&n);
printf("eneter elements into array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void search()
{
int s;
printf("eneter element to be searched");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
c=1;
}
if(c==1)
{
printf("the element is found");
}
else
{
printf("element not found");
}
}
int main()
{
input();
search();
}
