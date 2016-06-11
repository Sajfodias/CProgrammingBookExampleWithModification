#include <stdio.h>
#include <stdlib.h>
#define tabs printf("\n")

/*All examples implements from book "The C (ANSI C) Programming language. Second edition" by Brian W. Kernighan and Dennis M. Ritchie*/
/*Max Avdieiev*/

int main()
{
	int fahr, celsius;
	int lower, upper, step;
	printf("Introduce the lower border of temperature in fahrengeits: ");
	scanf_s("%d", &lower);
	tabs;
	printf("Introduce the upper border of temperature in fahrenghits: ");
	scanf_s("%d", &upper);
	tabs;
	printf("Introduce the step: ");
	scanf_s("%d", &step);
	tabs;
	fahr = lower;
	if (lower < -467.67) {
		printf("ERROR! The lower border is lower than absolute 0!\n");
		getchar();
		getchar();
		return -1;
	}
	if (upper > 27000000) {
		printf("Do you want to know what is the temperature on the sun in celsius?\n");
		getchar();
		getchar();
	}
	printf("|----------|\n");
	printf("|fahr->cels|\n");
	printf("|----------|\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("|%3d\t%3d|\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("|----------|\n");
	tabs;
	printf("Program works correct!\n");
	tabs;
	printf("Press any button to close the program...");
	getchar();
	getchar();
    return 0;
}

