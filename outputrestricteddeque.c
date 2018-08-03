#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
int  q[100];
int f=-1,r=-1,n,ele; 
void input_deque();
void output_deque();
int isfull(int);
int isempty();
int insert_rear(int,int);
int insert_front(int,int);
void delete_front();
void delete_rear();
void traverse();
int main()
{
	printf("enter the size :\n");
	scanf("%d",&n);
	int ch;
	printf("1.i/p restriction\n 2.o/p restriction\n");
	printf("enter choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:input_deque();break;
		case 2:output_deque();break;
		default:printf("entered wrong choice:");
	}
}
	void input_deque()
	{ 
		int choice;
	
		while(1)
		{
			printf("1.insertion at rear\n");
			printf("2.deletion at front\n");
			printf("3.deletion at rear\n 4.traverse\n 5.exit\n");
			printf("enter choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
				printf("enter ele to be inserted at rear end:\n");
					scanf("%d",&ele);
					insert_rear(ele,n);
					break;
				case 2:delete_front();
					break;
				case 3:delete_rear();break;
				case 4:traverse();
					break;
				case 5:printf("\n stop");
					exit(0);
			}
		}
	}
	void output_deque()
	{ 
		int a;
	
		while(1)
		{
			printf("1.insertion at rear\n");
			printf("2.insertion at front\n");
			printf("3.deletion at front\n 4.traverse\n 5.exit\n");
			printf("enter choice");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("enter ele to be inserted at rear end:\n");
					scanf("%d",&ele);
					insert_rear(ele,n);
					break;
				case 2:printf("enter ele to be inserted at front end:\n");
					scanf("%d",&ele);
					insert_front(ele,n);
					break;
				case 3:delete_front();break;
				case 4:traverse();
					break;
				case 5:printf("\n stop");
					exit(0);
			}
		}
	}
int isfull(int n)
{
	if(f==0&&r==n-1||f==r+1)
	
		return 1;
	else
		return 0;
}
int isempty()
{
	if(f==-1)
		return 1;
	else
		return 0;
}
int insert_front(int ele,int n)
{	
	
	int x; x=isfull(n);
	if(x==1)
	printf("no possible insertion");
	else{
		if(f==-1)
		{
			f=0;r=0;
		}
		else
		{	
			if(f==0)
				f=n-1;
			else
				f=f-1;
		}
	}
		q[f]=ele;
		printf(" element added to queue is%d",q[f]);
}
int insert_rear(int ele,int n)
{	
	
	int x;
	 x=isfull(n);
	if(x==1)
	printf("no possible insertion");
	else{
		if(f==-1)
		{
			f=0;r=0;
		}
		else
		{	
			if(r==n-1)
				r=0;
			else
				r=r+1;
		}
	}
	q[r]=ele;
	printf("element added is %d",q[r]);
}
void delete_front( )
{	
	
	int x;
	 x=isempty();
	if(x==1)
	printf("no possible deletion");
	else{
		printf("deleted element is %d",q[f]);
		if(f==r)		{
			f=-1;r=-1;
		}
		else
		{	
			if(f==n-1)
				f=0;
			else
				f=f+1;
		}
	}
}
void delete_rear()
{	
	
	int x;
	 x=isempty();
	if(x==1)
	printf("no possible deletion");
	else{
		printf("deleted element is %d",q[r]);
		if(f==r)		{
			f=-1;r=-1;
		}
		else
		{	
			if(r==0)
				r=n-1;
			else
				r=r-1;
		}
	}
}
void traverse(){
int front=f,rear=r;
if(front==-1)
printf("\n no elements");
printf("\n the elements in the queue are:\n");
if(front<=rear)
{
	while(front<=rear)
	{
		printf("%d\t",q[front]);
		front++;
	}
}
else
{
	while(front<=n-1)
	{
		printf("%d\t",q[front]);
		front++;
	}
	front=0;
	while(front<=rear)
	{
		printf("%d\t",q[front]);
		front++;
	}
}
printf("\n");
}



