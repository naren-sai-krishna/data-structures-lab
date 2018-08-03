#include<stdio.h>
#define maxsize 100
int  q[100];
int f=-1,r=-1;
int main()
{
	int ele,x,n;
	printf("enter the size\n");
	scanf("%d",&n);
	while(1)
	{
	printf("1.insertion\n");
	printf("2.deletionfront\n");
	printf("3.deletionrear\n");
	printf("4.traverse\n");
	printf("5.stop execution");
	int ch;
	printf("enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		
		printf("enter ele to be inserted\n");
		scanf("%d",&ele);
		int x= enqueue(ele,n);
		printf("%d",x);
		break;
	case 2:dequeuefront();
		break;
	case 3:dequeuerear();
		break;
	case 4:traverse();
		break;
	case 5:printf("stop execution");
		exit(0);
	default:printf("wrong choice");
	}
	}
	return 0;
}
int overflow(int n)
{
	if(r>n-1)
	
		return 1;
	else
		return 0;
}
int underflow()
{
	if(f==-1||f>r)
		return 1;
	else
		return 0;
}
int enqueue(int ele,int n)
{	
	
	int x=overflow(n);
	if(x==1)
	printf("not possible");
	else
	{
		f=0;
		r=r+1;
		q[r]=ele;
		return q[r];
	}
}
void dequeuefront()
{
	int p=underflow();
	if(p==1)
		printf("not possible");
	else
	{
		printf("the element deleted is %d",q[f]);
		f=f+1;
	}
}
void dequeuerear()
{
	int y=underflow();
	if(y==1)
		printf("not possible");
	else
	{
		printf("the element deleted is %d",q[r]);
		r=r-1;
	}
}
void traverse()
{
	int z=underflow();
	if(z==1)
		printf("not possible");
	else
	{
		int i;
		for(i=f;i<=r;i++)
		printf("%d",q[i]);
	}
}


