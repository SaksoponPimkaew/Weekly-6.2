#include <stdio.h>
//#include <math.h >
double sqrt(double x) {
	double i = 0.00;
	if (x < 0)
	{
		printf("Error ");
		return  0;
	}

	for (i = 0.000000;i*i <= x;) {
		i += 0.0000001;
	}
	return i;
}

int main()
{
	double number = 0, i, x;
	printf("Insert Your Number: ");
	scanf_s("%lf", &number);
	printf("The Answer Is     : ");
	printf("%lf", sqrt(number));

	return 0;
}

