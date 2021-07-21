#include<stdio.h>
int main()
{
	int a[3][3], i, j, sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element: ");
			scanf("%d",&a[i][j]);
	    }
	}
	printf("The matrix is: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\nThe sum of diagonal elements = %d",sum);
	return 0;
}
