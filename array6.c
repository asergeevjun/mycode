#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
	
	int *a; // указатель на массив
	int i, n;

	system("chcp 1251");
	system("clear");
	printf("Введите размер массива: ");
	scanf("%d", &n);

	// выделение памяти
	a = (int*) malloc(n*sizeof(int));

	// ввод элементов массива
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	// вывод элементов массива
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	free(a);
	getchar();
	getchar();

	return 0;
}