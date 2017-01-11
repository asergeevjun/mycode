#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
	
	int **a; // указатель на указатель на строку
	int i, j, n, m;

	system("chcp 1251");
	system("clear");
	printf("Введите количество строк: ");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);

	// выделение памяти под указатели на строки
	a = (int**)malloc(n*sizeof(int*));

	// ввод элементов массива
	for(i = 0; i < n; i++) // цикл по строкам
	{
		// выделение памяти под хранение строк
		a[i] = (int*)malloc(m*sizeof(int));
		for(j = 0; j < m; j++) // цикл по столбцам
		{
			printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
	}

	// вывод элементов массива
	for(i = 0; i < n; i++) // цикл по строкам
	{
		for(j = 0; j < m; j++) // цикл по столбцам
		{
			printf("%5d", a[i][j]); // 5 знакомест под элемент массива
		}
		printf("\n");
		free(a[i]); // освобождение памяти под строку
	}

	free(a);
	getchar();
	getchar();

	return 0;
}