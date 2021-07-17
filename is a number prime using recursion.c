#include<stdio.h>
static int n,count=0,k=2;
int prime(int k);
int main()
{
	printf("Enter a number: ");
	scanf("%d",&n);
	int prime(int k);
	if(prime(2)==0)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}

int prime(int k) 
{
	if(k==n)
	{
		return 0;
	}
	else
	{
		if(n%k==0)
		{
			count=count+1;
		}
		return count+prime(k+1);
	}
}
