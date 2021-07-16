#include<stdio.h>
int sum(int n);
static int n,k;
int main()
{
	printf("Enter a number to sum it's digits: ");
	scanf("%d",&n);
	int sum(int n);
	printf("%d",sum(n));	
	return 0;
}

int sum(int n)
{
	if(n>0)
	{
		return (n%10)+sum(n/10);		
	}
	else
	{
		return 0;
	}
}
