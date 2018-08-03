#include<stdio.h>
#define maxsize100
int q1[100],q2[100];
int n1,n2;
int f1=-1,r1=-1,f2=-1,r2=-1;
int enqueue();
int overflow();
void dequeue();
void traverse();
int main()
{
	int ele,x,pr;
	printf("enter the size of first queue\n");
	scanf("%d",&n1);
	printf("enter the size of second queue\n");
	scanf("%d",&n2);
	while(1)
	{
		printf("1.insertion\n");
		printf("2.deletion\n");
		printf("3.traverse\n");
		printf("4.stop execution\n");
		int ch;
		printf("enter choice");	
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("enter the ele to be inserted\n");
			scanf("%d",&ele);
			printf("enter priority");
			scanf("%d",&pr);
			int x=enqueue(ele,pr);
			printf("\n%d\n",x);
			break;
			case 2:dequeue();
			break;
			case 3:traverse();
			break;
			case 4:printf("stop execution");
			exit(0);
			default:("wrong choice");
		}
	}
}
int overflow(int pr,int n1,int n2)
{
	if(pr==1)
	{
		if(r1>n1-1)
		return 1;
		else
		return 0;
	}
	else
	{
		if(r2>n2-1)
		return 1;
		else
		return 0;
	}
}
int underflow()
{
	if(f1==-1&&r1==-1)
	return 1;
	else if(f1>r1&&f2<=r2)
	{
		if(f2==-1)
		return 1;
		else 
		return 0;
	}
	else if(f2>r2)
	{
		printf("queue is empty");
	}
	else 
	return -1;
}
int enqueue(int ele,int pr)
{
	if(pr==1)
	{
		int x=overflow(pr,n1,n2);
		if(x==1)
		printf("not possible");
		else
		{
			f1=0;
			r1=r1+1;
			q1[r1]=ele;
			return q1[r1];
		}
	}
	else
	{
		int z=overflow(pr,n1,n2);
		if(z==1)
		printf("not possible");
		else
		{
			f2=0;
			r2=r2+1;
			q2[r2]=ele;
			return q2[r2];
		}
	}
}
void dequeue()
{
	int y=underflow();
	if(y==1)
	printf("not possible");
	else if(y==-1)
	{
		printf("enter the element deleted is %d",q1[f1]);
		f1=f1+1;
	}
	else
	{
		printf("the element delete is %d",q2[f2]);
		f2=f2+1;
	}
}
void traverse()
{
	int p=underflow();
	if(p==1)
	printf("queue are empty");
	else
	{
		int i;
		for(i=f1;i<=r1;i++)
		printf("%d",q1[i]);
		for(i=f2;i<=r2;i++)
		printf("%d",q2[r2]);
	}
}
			

