#include<stdio.h>
#include<string.h>
int main()
{
int i,f=0,n;
char a[100];
char d;
printf("eneter size");
scanf("%d",&n);
printf("\nenetr alphabets");
for(i=0;i<=n;i++)
{
scanf("%c ",&a[i]);
}
printf("\nenter aplhabet to search");
scanf("%c ",&d);
for(i=0;i<=n;i++)
{
if(a[i]==d)
f++;
}
if(f==1)
{
printf("\naplhabet found");
}
else
{
printf("\nalphabet not found");
}
}

