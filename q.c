#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1;
int rear=-1;
int queuearr[max];
void insert();
void delete();
void display();


void main()
{
int choice;
while(1)
{
printf("1.insert\n2.delete\n3.display\n4.quit\n");
printf("enter your choice of operation");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(1);
default:printf("wrong choice\n");
}
}
}
void insert()
{
int element;
if(rear==(max-1))
{
printf("queue is overflowed\n");
}
else
{
if(front==-1)
{
front=0;
}
printf("enter the value into queue");
scanf("%d",&element);
rear=rear+1;
queuearr[rear]=element;
}
}
void delete()
{
if((front==-1)||(front>rear))
{
printf("queue is under flown");
}
else
{
printf("deleted element is%d\n",queuearr[front]);
front=front+1;
}
}
void display()
{
int i;
if((front==-1)||(front>rear))
{
printf("queue is empty\n");
}
else
{
printf("the queue elements are\n");
for(i=front;i<=rear;i++)
{
printf("%d\t",queuearr[i]);
}
}
}

