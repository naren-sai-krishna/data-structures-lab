#include<stdio.h>
void main()
{
	int l,u,a[20],key,n,i,x,temp,arr[10],j;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
	      if(a[i]>a[j])
	       {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	       }
	   }
	}
	for(i=0;i<n;i++)
	arr[i]=a[i];
	for(i=0;i<n;i++)
	scanf("%d",arr[i]);
	printf("enter the element to be serched:");
	scanf("%d",&key);
	l=0;
	u=n-1;
	x=binary(a,l,u,key);
	if(x==-1)
	printf("not found");
	else
	printf("found at position %d",x);
}
int binary(int a[],int l,int u,int key)
{
	int mid;
	if(l<=u)
	{
	   mid=((l+u)/2);
	   if(key==a[mid])
	   return mid;
	   if(key>a[mid])
	   return binary(a,u,mid+1,key);
	   if(key<a[mid])
	   return binary(a,l,mid-1,key);
}
else
return -1;
}  
	}
	else 
	return -1;
}
