#include <stdio.h>
		
int main(void) {

	int x = 100;
	printf("Десятичное = %d; Восьмеричное = %o; Шестандцатеричное = %x\n",
		x, x, x);
	printf("Десятичное = %d; Восьмеричное = %#o; Шестандцатеричное = %#x\n",
		x, x, x);

	return 0;
}