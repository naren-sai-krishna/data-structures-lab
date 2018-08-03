#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1;
int rear=-1;
int cqueuearr[max];
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
if((front==0&&rear==(max-1))||(front==(rear+1)))
{
printf("queue overflown");
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else
{
if(rear==(max-1))
{
rear=0;
}
else
{
rear=rear+1;
}
printf("enter value intpo queue");
scanf("%d",&element);
cqueuearr[rear]=element;
}
}
void delete()
{
if(front==-1)
return;
printf("deleted elemnt from queue is%d\n",cqueuearr[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
if(front==(max-1))
{
front=0;
}
else
{
front=front+1;
}
}
}
void display()
{
int f=front,r=rear;
if(front==-1)
{
printf("queue is empty\n");
return;
}
printf("queue elements are\t\n");
if(f<=r)
{
while(f<=r)
{
printf("%d\n",cqueuearr[f]);
f++;
}
}
else
{
while(f<=(max-1))
{
printf("%d\n",cqueuearr[f]);
f++;
}
f=0;
while(f<=r)
{
printf("%d\n",cqueuearr[f]);
f++;
}
}
}
