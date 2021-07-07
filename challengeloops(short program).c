#include<stdio.h>
main()
{
	int i,j,m,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=m-1;j<n;j++)
		{
			printf("01");
		}
		printf("\n");
		m=m-1;
	}
	return 0;
}

