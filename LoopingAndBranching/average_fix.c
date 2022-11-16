#include <stdio.h>

int main(void)
{
	int initNum, numberOfNumsToCalc=0, total=0, value;
	float average;
	printf("How many numbers are to be read?");
	scanf("%d", &numberOfNumsToCalc);

	for(initNum=0, initNum<numberOfNumsToCalc; initNum++)
	{
		scanf("%d", &value);
		total += value; // equivalent to total = total+value
		printf("Read %d\n", value);	
	}

	average = (float)total / (float)numberOfNumsToCalc;
	printf("You read %d values. Average = %f.\n", numberOfNumsToCalc, average);
	return (0);

}
