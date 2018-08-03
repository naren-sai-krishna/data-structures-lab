#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head = NULL,*pnew,*temp;
void insertion_front(){
}
void deletion_end(){
}
void insertion_end(){
}
void deletion_front(){
}
void deletion_middle(){
}
void traverse_front(){
}
void traverse_end(){
}
int main(){
	int ch;		printf("\n\t1.\tInsertion_front\n\t2.\tInsertion_end\n\t3.\tdeletion_front\n\t4.\tdeletion_end\n\t5.\tTraverse_front\n\t6.\tTraverse_end\n\t7.\tExit\n");
	while(1){
		printf("\n\tEnter choice : \t");
		scanf("%d",&ch);
		switch(ch){
			case 1 : break;
			case 2 : break;
			case 3 : break;
			case 4 : break;
			case 5 : break;
			case 6 : break;
			case 7 : printf("\n\t\tProgram terminated\t\n\n");
				 exit(1);
		}
	}
}
