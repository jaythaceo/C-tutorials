/* Second the series of c tutorials */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number = 10; // integer
	char names[256]; // array


	printf("%d is your number\n", number ); // %d or %i for the int

	printf("Enter your name: ");
	scanf("%s", names); // %s for the strings or char

	printf("your name is %s\n" , names);
	
	return 0;
}