#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define AC_RED 		"\x1b[31m"
#define AC_GREEN 	"\x1b[32m"
#define AC_YELLOW   "\x1b[33m"
#define AC_BLUE 	"\x1b[34m"
#define AC_MAGNETA  "\x1b[35m"
#define AC_CYAN 	"\x1b[36m"
#define AC_RESET 	"\x1b[0m"

// массив допустимых значений (флагов)
const char * const allowedFlags[] = { "--size", "--sort", "--print" };

// узнаем общий размер нашего массива и делим его на размер одного его элемента 			
const int const allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

void validateFlags(const char * const flags[], const int const length) 
{
	bool flagExists = false;
	int incorrectFlagIndex = -1;

	for (int i = 1; i < length; i++)
	{
		flagExists = false;

		// проход по списку
		for (int j = 0; j < allowedFlagsLength; j++)				
		{	
			// проверка совпадений (сравнивание)
			if (strcmp(flags[i], allowedFlags[j]) == 0)				
			{
				flagExists = true;			
				incorrectFlagIndex = -1;    // обнуляем счетчик
				break;						// обрываем цикл при первом сопадении
			}
			else incorrectFlagIndex = i;
		}

		// отрицание (!) отрицает выражение которое не было найдено
		if(!flagExists && incorrectFlagIndex > -1) 
		{									 		
			printf(AC_RED "[-] Error: %s Incorrect flag was given!\n" AC_RESET, flags[incorrectFlagIndex]);
			exit(EXIT_FAILURE);
		}
	}
}

// главная конструкция (точка входа в программу)
int main(const int const argc, const char * const argv[]) 
{
	if (argc > 1) 
		validateFlags(argv, argc);

	printf(AC_GREEN "[+] Congratulations!\n" AC_RESET);

	return EXIT_SUCCESS;
}