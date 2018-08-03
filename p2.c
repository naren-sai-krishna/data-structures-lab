#include<stdio.h>
int i,c,n,a[100];
void input()
{
printf("eneter size of array");
scanf("%d",&n);
printf("enter elements into array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void insert()
{
int x,y,z;
printf("eneter first middle and last element to be inserted");
scanf("%d%d%d",&x,&y,&z);
a[0]=x;
a[n/2]=y;
a[n]=z;
printf("%d%d%d",a[0],a[n/2],a[n]);
}
int main()
{
input();
insert();
}
