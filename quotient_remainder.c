#include <stdio.h>

int main()
{
	int dividend, divisor;
	int quotient, remainder;
	printf("Enter a dividend of your choice: ");
	scanf("%d",&dividend);
	printf("Enter a divisor of your choice: ");
	scanf("%d",&divisor);
	quotient= dividend/divisor;
	remainder= dividend%divisor;
	printf("Here's your quotient: %d, and its remainder: %d\n",quotient,remainder);
	
	return 0;
}
