#include<stdio.h>
int k,j,i,c,r,a[100][100],b[100][100];
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
void scalar()
{
printf("eneter scalar to be multiplied");
scanf("%d",&k);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=k*a[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",b[i][j]);
}
}
}
int main()
{
input();
scalar();
}
