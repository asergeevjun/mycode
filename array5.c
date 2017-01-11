#include <stdio.h>

// функция обмена
void change(int *x, int n) {
	
	// x - указатель на массив (адрес массива)
	// n - размер массива
	int i;
	int max, index;
	max = x[0];
	index = 0;

	// поиск максимального элемента
	for(i = 1; i < n; i++)
	{
		if(x[i] > max)
		{
			max = x[i];
			index = i;
		}
	}

	// обмен
	x[index] = x[0];
	x[0] = max;
}

int main(void) {
	int a[10];
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	change(a,10); //вызов функции обмена

	//вывод элементов массива
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	getchar();
	getchar();
	return 0;
}