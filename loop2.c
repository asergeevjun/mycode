#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main(void) {
	int prices[] = { 25, 50, 75, 100 };

	bool isTrue = true;
	bool isFalse = false; 

	int i = 0;

	for(int i = 0; i < SIZE; i++)
	{
		printf("%d\n", prices[i]);
	}

	return 0;
}