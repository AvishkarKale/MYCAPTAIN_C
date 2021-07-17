#include<stdio.h>
static int k,n,m,j,count=0;
int LCM(int k);
int main()
{
	printf("Input first number: ");
	scanf("%d",&n);
	printf("\nInput second number: ");
	scanf("%d",&m);
	if(n>m)
	{
		k=n;
	}
	else
	{
		k=m;
	}
	j=k;
	int LCM(int k);
	printf("LCM of %d and %d = %d",n,m,LCM(k));
	return 0;
}

int LCM(int k)
{
	while(k%m==0)
	{
		if(k%n==0)
		{
			return 0+j;
		}
		else
		{
			j=j+1;
			return LCM(k+1);
		}
	}
	j=j+1;
	return LCM(k+1);
}
