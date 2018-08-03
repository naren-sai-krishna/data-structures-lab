#include<stdio.h>
int main()
{
int k,g,n,i,j,a[100][100];
printf("enter size of array");
scanf("%d",&n);
printf("enter elements into array");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==0)
{k++;}
else
{g++;}
}
}
printf("the number of zeroes are %d",k);
printf("the number of ones are %d",g);
}
