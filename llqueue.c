#include<stdio.h>
#include<stdlib.h>
void insertq();
void deleteq();
int count();
void display();
typedef struct queue
{
int no;
struct queue *next;
}node;
node *first=NULL,*prev=NULL;
void main()
{
	//int size;
	//printf("enter the size");
	//scanf("%d",&size); 
	int i,n,x;
	//clrscr();
	while(1)
	{
		printf("\n 1:INSERTION\n 2:DELETION\n 3:DISPLAY\n 4:COUNT\n 5:EXIT\n");
		printf("enter choice");
		scanf("%d",&i);
		switch(i)
		{
			case 1: printf("Enter the element into the queue\n");
			scanf("%d",&x);
			insertq(x);
			break;
			case 2: deleteq();
			break;
			case 3: display();
			break;
			case 4: n=count();
			printf("The number of nodes in the linked list is:%d",n);
			break;
			case 5: exit(0);
			default:printf("sorry wrong selection try once again\n");
		}
	}
}
void insertq(int x)
{
	node *pnew;
	pnew=(node*)malloc(sizeof(node));
	pnew->no=x;
	printf("%d",pnew->no);
	pnew->next=NULL;
	if(first==NULL)
	{
	first=pnew;
	//printf(first->no);
	
	}
	else
	{
	//pnew=prev->next;
	prev=pnew;
	pnew=prev->next;
	//prev->next=prev;
	}
}
void deleteq()
{
	node *temp;
	if(first==NULL)
	{
	printf("Sorry Queue is empty\n");
	return;
	}
	printf("Deleted element from the queue is:%d",first->no);
	temp=first->next;
	first=temp;
}
void display()
{
	node *temp;
	temp=first;
	while(temp!=NULL)
	{
		printf("%3d",temp->no);
		temp=temp->next;
	}
	//getch();
}
int count()
{
	int c=0;
	node *temp;
	temp=first;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;	
	}
	return(c);
}


