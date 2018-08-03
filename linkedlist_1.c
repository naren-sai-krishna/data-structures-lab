#include<stdio.h>
#include<stdlib.h>
struct node
    {
     int no;
     struct node *next;
    }*head=NULL;
struct node *p,*pnew;
int main()
    {
      char choice;
      do
        {
            pnew=(struct node*)(malloc(sizeof(struct node)));
            printf("\n enter the number ");
            scanf("%d",&pnew->no);
            pnew->next=NULL;
            if(head==NULL)
                {
                    head=pnew;
                    p=pnew;
                }
            else
                {
                    p->next=pnew;                   
                    p=pnew;
                }
            printf("\n want to continue ????\n y/n ");
            scanf(" %c",&choice);
                 }while(choice=='y');
    printf("\n the elements in the linked list are \n \t : ");
    for(p=head;p!=NULL;p=p->next)
        printf("\t %d \t",p->no);
    return 0;
    }



