#include<stdio.h>
void main()
{
	int n;
	void towersofhanoi(int n,char a,char c,char b);
	printf("Enter the no.of poles\n");
	scanf("%d",&n);
	towersofhanoi(n,'A','C','B');
}
void towersofhanoi(int n,char a,char c,char b)
{
	if(n>0)
	{
		towersofhanoi(n-1,a,b,c);
		printf("Move disk %d from pole %c to pole %c\n",n,a,c);
		towersofhanoi(n-1,b,c,a);
	}
	return;
}

