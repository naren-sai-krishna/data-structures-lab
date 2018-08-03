#include<stdio.h>
#define maxsize 100
int  s[100];
int top=-1;
int enqueue();
int overflow();
int underflow();
void dequeue();
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
	printf("4.stop execution");
	int ch;
	
	printf("enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		
		printf("enter ele to be inserted\n");
		scanf("%d",&ele);
		int x= enqueue(ele,n);
		printf("%d\n",x);
		break;
	case 2:dequeue();
		break;
	case 3:traverse();
		break;
	case 4:printf("stop execution");
		exit(0);
	default:printf("wrong choice");
	}
}
}
int overflow(int n)
{
	if(top>n-1)
	
		return 1;
	else
		return 0;
}
int underflow()
{
	if(top==-1)
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
		top=top+1;
		s[top]=ele;
		return s[top];
	}
}
void dequeue()
{
	int y=underflow();
	if(y==1)
		printf("not possible");
	else
	{
		
		printf("the element deleted is %d\n",s[top]);
		top=top-1;
	}
}
void traverse(){
int z=underflow();
	if(z==1)
		printf("not possible\n");
	else
{


		int i;
		for(i=top;i>=0;i--)
		printf("%d\n",s[i]);
	}
}
