#include<stdio.h>
#define size 50
#include<ctype.h>
int s[size];
int top=-1;
void push(int elem)
{
s[++top]=elem;
}
int pop()
{
return(s[top--]);
}
int main()
{
char postfix[50],ch;
int i=0,op1,op2;
printf("enter the postfix expresion");
scanf("%s",postfix);
while((ch=postfix[i++])!='\0')
{
if(isdigit(ch))
push(ch-'0');
else
{op2=pop();
op1=pop();
switch(ch)
{
case'+':push(op2+op1);break;
case'-':push(op2-op1);break;
case'*':push(op2*op1);break;
case'/':push(op2/op1);break;
}
}
}
printf("result after evaluation is=%d\n",s[top]);
}

