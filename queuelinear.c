#include<stdio.h>
#include<stdlib.h>
#define maxsize[100]
int q[100];
int f=-1,r=-1;
int enqueue();
int overflow();
int underflow();
void dequeue();
void traverse();
int main()
{
	int ele,x,n;
	printf("enter the size");
	scanf("%d",&n);
	while(1)
	{
		printf("1.insertion\n");
		printf("2.deletion\n");
		printf("3.traverse\n");
		int ch;
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted\n");
				scanf("%d",&ele);
				x=enqueue(ele,n);
				printf("%d",x);
				break;
			case 2:dequeue();
				break;
			case 3:traverse();
				break;
		}
	}
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
	printf("queue is full\nnot possible\n");
	else
	{	
		f=0;
		r=r+1;
		q[r]=ele;
		return q[r];
	}
}
void dequeue()
{
	int y=underflow();
	if(y==1)
	printf("not possible");
	else
	{
		printf("the element deleted is %d",q[f]);
		f=f+1;
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
				





