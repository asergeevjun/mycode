#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main(void) {
	int prices[SIZE] = { 100, 200, 300, 400 };

	bool isTrue = true;		// 1
	bool isFalse = false;	// 0

	printf("True: %d, False: %d\n", isTrue, isFalse);

	int i = 0;

	while(i < SIZE)
	{
		printf("%d\n", prices[i]);
		i = i + 1;
		//i += 1;
		//i ++;
	} 

	//printf("%d\n", prices[0]);
	//printf("%d\n", prices[1]);
	//printf("%d\n", prices[2]);
	//printf("%d\n", prices[3]);

	return 0;
}