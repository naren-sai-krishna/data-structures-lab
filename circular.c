#include<stdio.h>
#define size 4
int s[size];
int rear=-1,front=-1;
int elem;
void push()
{
if((rear+1)%size==front)
printf("queue overflow\n");

else
{
if(front==-1)front=0;
rear=(rear+1)%size;
printf("insertion element:");
scanf("%d",&elem);
s[rear]=elem;
}
}
void pop()
{
if(front==size-1)
printf("\ndeletion not possible\n");
else
{

printf("element deleted:%d\n",s[front]);
if(front==rear){front=-1;rear=-1;}
else
front=(front+1)%size;
//front++;
}
}
void display()
{
int i;
if(front==rear)
printf("queue empty\n");
else if(front>rear)
{
printf("queue elements:");
for(i=front;i<size;i++)
printf("%d\n",s[i]);
for(i=0;i<=rear;i++)
printf("%d\t",s[i]);
}
else
{
for(i=front;i<=rear;i++)
printf("%d\t",s[i]);

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
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: return 0;
}
}
}























