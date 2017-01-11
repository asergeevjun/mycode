#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s[80], sym;
	int count, i;
	system("chcp 1251");
	system("clear");
	printf("Введите строку: ");
	gets(s);
	printf("Введите символ: ");
	sym = getchar();
	count = 0;
	for(i = 0; s[i]!='\0'; i++)
	{
		if(s[i]==sym)
			count++;
	}
	printf("В строке\n");
	puts(s);				// вывод строки
	printf("Символ ");
	putchar(sym); 			// вывод символа
	printf(" стречается %d раз", count);
	getchar();

	return 0;
}