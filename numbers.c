#include <stdio.h>

int k=1; // глобальный объект
void autofunc(void) {
	//int k=1;	// локальный объект
	printf(" \n k = %d ", k);
	k=k+1;
}

int main() {
	for(int i = 0; i<=10; i++) // область видимости i - цикл
		autofunc();
	getchar();
	return 0;
}