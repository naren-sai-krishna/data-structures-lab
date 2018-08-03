#include<stdio.h>
int q[100];
int f=-1,r=-1;
int enqueue(int,int);
int overflow(int);
int underflow();
int clearqueue();
void traverse();
int main()
{
	int ele,x,n;
	printf("enter the size\n");
	scanf("%d",&n);
	while(1)
	{
	   printf("1.insertion\n");
	   printf("2.deletion\n");
	   printf("3.traverse\n");
	   printf("4.exit\n");
	   int ch;
	   printf("enter choice");
	   scanf("%d",&ch);
	    switch(ch)
	   {
		case 1:
		printf("enter ele to be inserted\n");
		scanf("%d",&ele);
		int x=enqueue(ele,n);
		printf("the element inserted is %d \n",x);
		break;
		case 2:dequeue();
		break;
		case 3:traverse();
		break;
		default:printf("\n wrong choice");
	  }
	}
	return 0;
}
int overflow(int n)
{
	if(((r+1)%n)==f)
	  return 1;
	else 	  
	  return 0;
}
int underflow()
{
	if(f==-1||r==-1)
	return 1;
	else
	return 0;
}
int enqueue(int ele, int n)
{
	
        int x=overflow(n);
	if(x==1)
	printf("not possible");
	else
	{
		f=0;
		r=((r+1)%n);
		q[r]=ele;
		return q[r];
	}
}
int clearqueue()
{
	f=-1;
	r=-1;
}
void dequeue(int n)
{
	int y=underflow();
	if(y==1)
	printf("queue empty\nnot possible");
	else
	{
		if(f==r)
		{
			printf("the element is deleted is %d",q[f]);
			clearqueue();
		}
		else
		{
			printf("the element deleted is %d",q[f]);
			f=((f+1)%n);
		}
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

