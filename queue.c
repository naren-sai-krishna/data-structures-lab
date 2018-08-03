#include<stdio.h>
#define size 5
int q[size];
int rear=-1,front=-1;
int elem;
void insertion()
{
if(rear==size-1)
printf("queue overflow\n");
else
{
if(front==-1)
front=0;
printf("enter element:");
scanf("%d",&elem);
rear++;
q[rear]=elem;
}
}
void deletion()
{
if(front==-1||front>rear)
printf("queue is empty\n");
else
{
printf("element deleted=%d\n",q[front]);
front++;
}
}
void display()
{
int i;
if(front==-1||front>rear)
printf("queue is empty\n");
else
{
printf("queue:\n");
for(i=front;i<=rear;i++)
printf("%d\n",q[i]);
}
}
int main()
{

while(1)
{
int n;
printf("1.insertion\t2.deletion\t3.display\t4.quit\n");
printf("enter choice:");
scanf("%d",&n);
switch(n)
{
case 1:
{
insertion();
break;
}
case 2:
{
deletion();
break;
}
case 3:
{
display();
break;
}
case 4:
return(0);
}
}
}
















