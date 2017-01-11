#include <stdio.h>

int main() {

	int seconds;
	printf("Input: ");
	scanf("%d", &seconds);

	double minuts = seconds/60;
	double hours = minuts/60;

	printf("minuts: %lf\n", minuts);
	printf("hours: %lf\n", hours);

	return 0;
}