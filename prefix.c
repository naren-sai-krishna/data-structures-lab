#define size 50
#include<string.h>
#include<ctype.h>
#include<stdio.h>
char s[size];
int top=-1;
int i,j=0,temp;
push(char elem)
{
s[++top]=elem;
}
char strgrev(char str)
{
i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
return str;
}
char pop()
{
return(s[top--]);
}
int pr(char elem)
{
switch(elem)
{
case '#':return 0;
case ')':return 1;
case '+':
case '-':return 2;
case '*':
case '/':return 3;
}
}
int main()
{
char infix[50],prefix[50],ch,elem,sample[50],sample1[50];
int i=0,k=0;
printf("enter infix expression:");
scanf("%s",infix);
push('#');
sample=strgrev(infix);
printf("%s",infix);
while( (ch=sample[i++]) != '\0')
    {
        if( ch == ')') push(ch);
        else
            if(isalnum(ch)) prefix[k++]=ch;
            else
                if( ch == '(')
                {
                    while( s[top] != ')')
                        prefix[k++]=pop();
                    elem=pop();
                }
                else
                {       
                    while( pr(s[top]) >= pr(ch) )
                        prefix[k++]=pop();
                    push(ch);
                }
    }
    while( s[top] != '#')     
        prefix[k++]=pop();
    prefix[k]='\0';          
   sample1= strgrev(prefix);
  //strrev(infix);
    printf("\n\nGiven Infix Expn: %s  Prefix Expn: %s\n",infix,sample1);
}
















