#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int rear1=-1;
int rear2=size;
int front=-1;
void enqueue();
void deletefront();
void deleterear();
void display();
int main()
{
int ch;
while(1)
{
printf("\nenter your choice of operation\n");
printf("1.enqfront\n2.enqrear\n3.deletefront\n4.deleterear\n5.display\n6.default");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueuefront();
	break;
case 2:enqueuerear();
	break;
case 3:deletefront();
	break;
case 4:deleterear();
	break;
case 5:display();
	break;
case 6:exit(0);
}
}
}
void enqueuefront(int n)
{
printf("enter value into the queue");
scanf("%d",&n);
if(rear1==size-1)
{
printf("queue is over flown");
}
else
{
rear1++;
queue[rear1]=n;
if(front==-1)
{
printf("the front is -1");
front=0;
}
}
}
void enqueuerear(int x)
{
printf("enter value into queue from rear end");
scanf("%d",&x);
if(rear2==rear1)
{printf("the queueu is over flown");}
else
{
rear2--;
queue[rear2]=x;
}
}
void deleterear()
{
if(front>rear1)
{printf("the queue is empty");}
else
{
printf("the deleted element form rear is %d",queue[rear1]);
rear1--;
}
}
void deletefront()
{
if(front>rear1)
{printf("queue is empty");}
else
{
printf("the deleted element  from front is %d",queue[front]);
front++;
}
}
void display()
{
if (front==-1)
{printf("queue is empty");}
else
{
int i;
for(i=front;i<=rear1;i++)
{
printf("%d\n",queue[i]);
}
}
}
