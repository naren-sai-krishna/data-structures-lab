#include<stdio.h>
#include<string.h>
int main()
{
int i,k=0,n; 
char s,a[100];
printf("eneter size of array");
scanf("%d",&n);
printf("eneter elements into array");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
printf("eneter which element frequency u wanna find\n");
scanf("%c",&s);
for(i=0;i<n;i++)
{
if(s==a[i])
{
k++;
}
}
printf("the frequency of eleemnet is %d\n",k);
}

