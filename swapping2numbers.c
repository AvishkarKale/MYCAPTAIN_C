#include<stdio.h>
main()
{
	int a, b, k;
	k = 0;
	a = 10;
	b = 20;
	k = a;
	a = b;
	b = k;
	printf("a = %d\nb = %d",a,b);
	return 0;
}
