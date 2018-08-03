#include<stdio.h>
#defline INT_SIZE sizeof(int)*8
int main()
{
int num,zero=0,one=0;
intn,m,a[20][20],k,i,j,temp;
prinf("size of matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if (a[i][j]==0)
{
zero ++;
}
else
{
one ++;
}
}
}
printf("the number of zero's are:%d\n",zero);
printf("the number of one's are:%d\n",one);
}
