#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size,n,i;
int *stack;
void push()
{
	int element;
	if(top==size-1)
{
	printf("stack is filled");
}
	else
{
	printf("eneter element into stack");
	scanf("%d",&element);
	top=top+1;
	stack[top]=element;
}
}
void pop()
{
	if(top==-1)
{
	printf("the stack is empty");
}
	else
{
	printf("popped element is \n%d",stack[top]);
	top=top-1;
}
}
void display()
{
	int i;
	if(top==-1)
{
	printf("the stack is empty");
}
	else
{
	for(i=top;i>=0;i--)
{
	printf("%d\n",stack[i]);
}
}
}
	int main()
{
	
	printf("eneter size of stack");
	scanf("%d",&size);
	stack=(int *)malloc(size*sizeof(int));
	do
{
	printf("1.push\n2.pop\n3.display\n4.quit\n");
	printf("eneter your chioce");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:push();
		break;
	case 2:pop();
	break;
	case 3:display();
		break;
	case 4:exit(1);
	default:printf("wrong choice");
}
}while(1);
}
