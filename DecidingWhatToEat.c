#include<stdio.h>
main()
{
	int n;
	printf("Enter any number between 1 to 5:\n1. Pizza, Rs 239\n2. Burger, Rs 129\n3. Pasta, Rs 179\n4. French Fries, Rs 99\n5. Sandwich, Rs 149\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Food item- pizza\nPrice- Rs239");
			break;
		case 2:
			printf("Food item- Burger\nPrice- Rs 129");
			break;
		case 3:
			printf("Food item- pasta\nPrice- Rs 179");
			break;
		case 4:
			printf("Food item- French Fries\nPrice- Rs 99");
			break;
		case 5:
			printf("Food item- Sandwich\nPrice- Rs 149");
			break;	
		default:
		    printf("you entered an invalid number"); 				
	}
	return 0;
}
