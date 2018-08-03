#include<stdio.h>
void main()
{
    int i,n,a[20],key,x;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched:");
    scanf("%d",&key);
    x=linear(a,n,key);
    if(x<=n)
    printf("key is found at location %d",x);
    else
    printf("not found");
}
int linear(int a[],int n,int key)
{
	int i;
	for(i=1;i<=n;i++)
	{	
	   if(a[i]==key)
	   return i;
	}
	return i;
}
