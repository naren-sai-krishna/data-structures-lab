#include<stdio.h>
#include<string.h>
int n,i,k=0,j;
char s;
char str[100][100];
void input()
{
printf("enter no.of names");
scanf("%d",&n);
printf("eneter names of people");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%s",str[i][j]);
}
}
}
void search()
{
printf("eneter name to be searched\n");
scanf("%s",s);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(str[i][j]==s)
{k++;
}
}}
if(k==1)
{
printf("name is found in the list");
}
else
{
printf("name is not found in the list");
}
}
int main()
{
input();
search();
}
