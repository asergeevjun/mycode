#include <stdio.h>

int main(void) {

	//объявлен массив а из 5 элементов
	int a[5]; 
	int i;

	//ввод элемента массива
	for(i = 0; i < 5; i ++) 
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]); //&a[i] - адрес i-го элемента массива
	}

	//вывод элементов массива
	for(i = 0; i < 5; i ++) {
		printf("%d\n", a[i]); //пробел в формате печати обязателен
	}
	getchar();
	getchar();
	return 0;
}