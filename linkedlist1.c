#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head = NULL,*pnew,*temp;
void insertion(){
	pnew = (struct node * )malloc(sizeof(struct node));
	printf("\n\tEnter data :\t");
	scanf("%d",&pnew->data);
	pnew->next = NULL ;
	if(head == NULL){
		head = pnew ;
		temp = pnew ;
	}
	else{
		temp->next = pnew ;
		temp = pnew ;	
		
	}
}

void Traverse(){
		for( temp = head ; temp != NULL ; temp=temp->next){
			printf("\t%d\t",temp->data);
		}			
}
int main(){
	printf("\n\t1.\tInsertion\n\t2.\tTraverse\n\t3.\tExit\n");
	while(1){
		int ch;
		printf("\n\tEnter choice : \t");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : insertion();
				 break;

			case 2 : Traverse();
				 break;

			case 3 : printf("\t>>>>>>>>>>\tProgram terminated\t<<<<<<<<<<< \n");
				 exit(1);
		}
	}
}



