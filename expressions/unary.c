
#include <stdio.h>
int main(void)
{	
	int i = 4, j = 3, k;
	printf("print the result of unary operator pre-incremented alone %i\n", k = ++i);

	printf("print the result of unary operator pre-incremented %i\n", k = ++i + j);

	printf("print the result of unary operator post-decremented alone %i\n", k = i--);

	printf("print the result of unary operator post-decremented %i\n", k = i-- + j);

	return (0);


}
