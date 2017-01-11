#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
	
	int *a; // указатель на массив
	int i, j, n, m;

	system("chcp 1251");
	system("clear");
	printf("Введите количество строк: ");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);

	// выделение памяти
	a = (int*) malloc(n*m*sizeof(int));

	// ввод элемента массива
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("a[%d][%d] = ", i,j);
			scanf("%d", (a+i*m+j));
		}
	}

	// вывод элементов массива
	for(i = 0; i < n; i++) //цикл по строкам
	{
		for(j = 0; j < m; j++) // цикл по столбцам
		{
			printf("%5d ", *(a+i*m+j)); // 5 знакомест под элемент массива
		}
		printf("\n");
	}
	free(a);
	getchar();
	getchar();

	return 0;
}