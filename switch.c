#include<stdio.h>

int main()
{
	printf("Enter your choice \n1. Pizza,Rs:239\n2. Burger,Rs:129\n3. Pasta,Rs:179\n4. French Fries,Rs:99\n5. Sandwich,Rs:149");
	int c=0;
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("Food Item: Pizza\n Price:Rs239");
			break;
		case 2:
			printf("Food Item: Burger\n Price:Rs129");
			break;
		case 3:
			printf("Food Item: Pasta\n Price:Rs179");
			break;
		case 4:
			printf("Food Item: French Fries\n Price:Rs99");
			break;
		case 5:
			printf("Food Item: Sandwich\naPrice:Rs149");
			break;
		default:
			printf("Invalid Input");
		
	}
}
