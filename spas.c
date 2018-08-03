#include<stdio.h>
int main()
{
int n,m,a[20][20],k=0,i,j,temp;
printf("size of matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==0)
{
k++;
}
}
}
temp=(m*n)/2;
if((temp<k)||(temp==k))
{
printf("given matrix is a spars matrix\n");
}
else
{
printf("given matrix is not spars matrix\n");
}
}
