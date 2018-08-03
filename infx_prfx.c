#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define size 50
char s[size];
char infix[50],postfix[50],prefix[50],temp[50],ch,elem;
int top=-1;
char push(char elem)
{
s[++top]=elem;
}
char pop()
{
return(s[top--]);
}
int pr(char elem)
{
switch(elem)
{
case'#':return 0;
case')':return 1;
case'+':
case'-':return 2;
case'*':
case'/':return 3;
}
}
int main()
{

int i=0,k=0;

printf("enter infix expression:\n");
scanf("%s",infix);
printf("infix expression:%s\n",infix);

for(i=0;i<strlen(infix);i++)
{
temp[i]=infix[strlen(infix)-i-1];
}
temp[i]='\0';


strcpy(infix,temp);
i=0;
push('#');
while((ch=infix[i++])!='\0')
{
if(ch==')')
push(ch);
else if(isalnum(ch))
postfix[k++]=ch;
else if(ch=='(')
{
while(s[top]!=')')
{
postfix[k++]=pop();
}
elem=pop();
}
else
{
while(pr(s[top])>=pr(ch))
postfix[k++]=pop();
push(ch);
}
}
while(s[top]!='#')
postfix[k++]=pop();
postfix[k]='\0';
for(i=0;i<strlen(postfix);i++)
{
prefix[i]=postfix[strlen(postfix)-i-1];
}
prefix[i]='\0';

printf("prefix expression=%s\n",prefix);
return 0;
}





