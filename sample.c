#include <stdio.h>

int main(void) {

	double a;
	double b;

	printf("Input value for first operand: ");
	scanf("%lf", &a);

	printf("Input value for second operand: ");
	scanf("%lf", &b);

	double res1 = a + b;
	double res2 = a - b;
	double res3 = a * b;
	double res4 = a / b;

	printf("%.2f + %2.f = %2.f\n", a, b, res1);
	printf("%.2f - %2.f = %2.f\n", a, b, res2);
	printf("%.2f * %2.f = %2.f\n", a, b, res3);
	printf("%.2f / %2.f = %2.f\n\n", a, b, res4);
	
	printf("Enter something...");

	return 0;
}