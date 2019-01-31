//Define two integers to add together
#include<stdio.h>

int main()
{
	// Task: Define two integers
	
	// Display their valuses
	
	// Display the sum of them

	int first = 36;
	int second = 74;
	int sum = first + second;


	Scanf("%d", &first);
	printf("Please enter another integer valuse\n:);
	// To capture user input, use the scanf() function
	// Use same placeholders as printf: %d for integers
	// BUT remember to use teh Address operator before variable name,
	// Address operator '&'
	printf("The sum of %d, and %d is: %d.\n", first, second, sum);

	return 0;

}

