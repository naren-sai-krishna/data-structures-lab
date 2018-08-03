#include<stdio.h>
#include<stdlib.h>
struct node
{
	int no;
	struct node *next;
}*head=NULL;
struct node *p,*pnew;
void main()
{
	char ch;
	do
	{
		pnew=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:");
		scanf("%d",&pnew->no);
		pnew->next=NULL;
		if(head==NULL)
		{
			head=pnew;
			p=head;
		}
		else
		{
			p->next=pnew;
			p=pnew;
		}
		printf("enter y if you want to continue else enter n:\t");
		scanf(" %c",&ch);
		}while(ch=='y');
		printf("numbes in linklist are:\n");
		for(p=head;p!=NULL;p=p->next)
		printf("%d \t",p->no);
}
		

