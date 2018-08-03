#include<stdio.h>
#define size 6
int stack[size],top=-1;
void push()
{

if(top==size-1)
printf("stack is full");
else
{
int n;
printf("enter element:");
scanf("%d",&n);
top++;
stack[top]=n;
}
}
void pop()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("element popped:%d\n",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
printf("not possible\n");
else
{
int i;
printf("elements in stack:");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
int main()
{
int ch;
while(1)
{
printf("1.push\t2.pop\t3.display\t4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
default:
printf("exit");
break;
}
}
}
}



 

















