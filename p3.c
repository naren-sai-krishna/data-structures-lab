#include<stdio.h>
int k,j,i,c,r,a[100][100];
void input()
{
printf("eneter rows and colums of array");
scanf("%d%d",&r,&c);
printf("enter elements into array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void check()
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]==0)
{
k++;
}
}
}
if(k>=((r*c)/2))
{
printf("it is a spars matrix");
}
else
{
printf("it is not spars matrix");
}
}
int main()
{
input();
check();
}
