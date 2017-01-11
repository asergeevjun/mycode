#include <stdio.h>

int main(void) {
	int a[2][3]; // массив из двух строк и трех столбцов
	int i, j;

	// ввод элементов массива
	for(i = 0; i < 2; i++) // цикл по строкам
	{
		for(j = 0; j < 3; j++) //цикл по столбцам
		{
			printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
	}

	//вывод элемента массива
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\n", a[i][j]);
		}
		printf("\n"); //перевод на новую строку
	}
	getchar();
	getchar();

	return 0;
}
