#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
	if(n % 2 == 0){
		printf("the number is even\n", n);
	}
	else
	{
		printf("the number is odd\n", n);
	}

	printf("the last digit = %d\n", n % 10);

	if(n > 5){
		printf("the the number is greater than 5\n");
	}
	else if(n < 5){
		printf("the the number is less than 5\n");
	}
	else{
		printf("the the number is equal to 5\n");
	}
	return (0);
}