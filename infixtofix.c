#include<stdio.h>
#include<string.h>
char in[12],stack[20],post[12];
int top=-1;
char pop();
int prior(char);
void push(char);
char stacktop();
int prcd(char,char);
int empty();
void main()
{
	int i=0,j=0;
	char symb;
	printf("\n enter infix string");
	gets(in);	
	while(in[i]!='\0')
	{
		symb=in[i];
		if(symb>='a'&&symb<='z')
		post[j++]=symb;
		else
		{
			while(!empty()&&prcd(stacktop(),symb))
			post[j++]=pop();
			push(symb);
		}	
		i++;
	}
	while(!empty())
	post[j++]=pop();
	post[j]='\0';
	printf("\n the string in postfix is %s",post);
}
int empty()
{
	if(top==-1)
	return 1;
	else	
	return 0;
}
char pop()
{
	if(empty())
	printf("\n stack is empty");
	else
	return(stack[top--]);
}
char stacktop()
{
	return(stack[top]);
}
void push(char symb)
{
	top++;
	if(top==20)
	printf("\n stack is full");
	else
	stack[top]=symb;
}
int prcd(char tsymb,char symb)
{
	if(prior(tsymb)>=prior(symb))
	return 1;
	else
	return 0;
}
int prior(char t)
{
	switch(t)
	{
		case '+':return 1;
		case '*':return 2;
		case '/':return 2;
		case '-':return 1;
	}
}


