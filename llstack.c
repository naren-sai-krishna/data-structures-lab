#include<stdlib.h>
#include<stdio.h>
void push();
void pop();
void display();
int count();
void peep();
typedef struct stack
{
int item;
struct stack *ptr;
}node;
node *root=0;
void main()
{
int i,x,n,pos;
while(1)
{
printf("\n 1:push\n 2:pop\n 3:peep\n 4:display\n 5:count\n 6:exit\n");
scanf("%d",&i);
switch(i)
{
case 1: printf("Enter the element into stack\n");
scanf("%d",&x);
push(x);
break;
case 2: pop();
break;
case 3: printf("Enter the required position of the element \n");
scanf("%d",&pos);
peep(pos);
break;
case 4: display();
break;
case 5: n=count();
printf("The number of nodes in the linked list is:%d",n);
break;
case 6: exit(0);
default: printf("Wrong selection try once again\n");
}
}
}
void push(int x)
{
node *cur;
cur=(node*)malloc(sizeof(node));
cur->item=x;
cur->ptr=NULL;
if(root==NULL)
root=cur;
else
{
cur->ptr=root;
root=cur;
}
}
void pop()
{
node *temp;
if(root==NULL)
{
printf("Stack is empty");
return;
}
temp=root->ptr;
printf("The popped element is:%d",root->item);
free(root);
root=temp;
}
void peep(int pos)
{
int n,i;
node *temp;
if(root==NULL)
{
printf("Sorry stack is empty");
return;
}
n=count();
if(pos<1||pos>n)
{
printf("Sorry out of range");
return;
}
temp=root;
i=1;
while(i<pos)
{
temp=temp->ptr;
i++;
}
printf("The element in that position is:%d",temp->item);
}
void display()
{
node *temp;
temp=root;
if(temp!=NULL)
{
while(temp!=NULL)
{
printf("%3d",temp->item);
temp=temp->ptr;
}
}
else
printf("sorry stack is empty");
}
int count()
{
int c=0;
node *temp;
temp=root;
while(temp!=NULL)
{
c++;
temp=temp->ptr;
}
return(c);
}


