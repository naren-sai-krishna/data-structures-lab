#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int no;
	struct node *next;
}node;
node*next=NULL;
struuct node,*pnew;
void main()
{
	int i;
	while(1)
	{
		printf("1.INSERTION\n 2.DELETION\n 3.TRAVERSE\n 4.EXIT");
		printf("enter choice");
		scanf("%d",&i);
		
		
