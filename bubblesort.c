#include <stdio.h>

//установим директиву на размер нашего массива
#define SIZE 8

int main(void) 

{
	//объявление массива размером в 8 элеметов
	int array[] = { 1, 2, -4, 5, -11, 12, 0, -7 };

	//объявление переменных
	int j, i, temp;

	//выполнение цикла for
	for ( i = 0; i < SIZE - 1; i++ ) {
		for (j = 0; j < SIZE - 1; j++) {
			
			//выполнение цикла if
			if (array[j] > array[j + 1]) {
				temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	//вывод сообщения на экран
	printf(" [*] This is bubbles sort in C [*] \n");

	for ( i = 0; i < SIZE; i ++) {
		printf("%d\n", array[i]);
	}

	return 0;
}