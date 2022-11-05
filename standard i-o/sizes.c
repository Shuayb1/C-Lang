#include <stdio.h>
int main(void)
{	
	int i;
	double s;
	char c;

	printf("the value os integer is %lu\n", (unsigned long)sizeof(i));
	printf("the value of double is %lu\n", (unsigned long)sizeof(s));
	printf("the value of a char is %lu\n", (unsigned long)sizeof(c));

	return (0);

}
