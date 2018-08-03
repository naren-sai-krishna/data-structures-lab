#include<stdio.h>
#include<stdlib.h>
#define size 5
int rear=-1,front=-1;
int q[size];
void insertstart();
void deletionstart();
void deletionend();
void deletionstart();
void display();
void enqueue()
{
int elem;
if(rear==size-1)
printf("queue overflow\n");
else
{
printf("insertion element:");
scanf("%d",&elem);
q[++rear]=elem;
if(front==-1)
front=0;
}
}
void dequeue()
{
if(front==rear)
printf("queue underflow\n");
else
{
printf("element deleted:%d\n",q[front]);
front++;
}
}
void dequeuerear()
{
if(front==rear)
printf("queue empty\n");
else
{
printf("element deleted from the end:%d\n",q[rear]);
rear--;
}
}
void display()
{
if(front>rear)
printf("queue is empty\n");
else
{
for(int i=front;i<=rear;i++)
printf("%d\n",q[i]);
}
}
int main()
{
int ch;
while(1)
{
printf("1.enqueue\t2.dequeue\t3.dequeue rear\t4.display\t5.exit\n");
printf("enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:dequeuerear();
break;
case 4:display();
break;
case 5:return 0;
}
}
}
















































