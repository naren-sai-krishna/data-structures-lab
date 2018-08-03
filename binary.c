#include<stdio.h>

int binary(int a[],int l,int u,int s)
{
int mid;
if(l<=u)
{
mid=(l+u)/2;
if(a[mid]==s)
return 0;
else if(a[mid]<s)
{
binary(a,mid+1,u,s);
}
else if(a[mid]>s)
{
binary(a,l,mid-1,s);
}
else
return -1;
}
}
int main()
{
int a[7],L,U,S,x,mid,i;
printf("enter elements :");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
printf("elements in array:\n");
for(i=0;i<7;i++)
printf("%d\t",a[i]);
printf("\nenter search element:\n");
scanf("%d",&S);
L=0,U=6;
mid=(L+U)/2;
x=binary(a,L,U,S);
if(x!=-1)
{
printf("%d is found\n",S);
}
else
printf("%d not found\n",S);
}




