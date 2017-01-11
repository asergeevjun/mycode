#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define AC_RED 		"\x1b[31m"
#define AC_GREEN 	"\x1b[32m"
#define AC_BLUE 	"\x1b[34m"
#define AC_RESET 	"\x1b[0m"

#define APP_VERSION "0.1.1"

void versionHandler(void); //подсказка
void helpCommand(void);

// массив допустимых значений (флагов)
const char * const allowedFlags[] = { "--version", "--help" };  	// ключами выступают два флага

// массив указателей на функции (* к имени массива)
void(*commandsStore[])(void) = { versionHandler, helpCommand };		// передача имени в массив указателя на функции - mapping

// узнаем общий размер нашего массива и делим его на размер одного его элемента 			
const int const allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

void validateFlags(const char * const flags[], const int const length) 
{
	bool flagExists = false;
	int incorrectFlagIndex = -1;

	// цикл
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

// функция вызова комманд
void invokeCommands(const char * const commands[], const unsigned int count)
{
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < allowedFlagsLength; j++)
		{	
			// операция сравнения
			if (strcmp(commands[i], allowedFlags[j]) == 0) 
			{
				// вызов функции в С всегда выполняется 
				// с помощью круглых скобок
				commandsStore[j]();	
			}
		}
	}
}

// функция вывода версии
void versionHandler(void)
{
	printf("Current version: %s\n", APP_VERSION);
}

// функция вывода помощи
void helpCommand(void)
{
	printf(AC_GREEN "Help command invoked.\n" AC_RESET);
}

// главная конструкция (точка входа в программу)
int main(const int const argc, const char * const argv[]) 
{
	if (argc > 1) 
		validateFlags(argv, argc);
	else printf(AC_GREEN "[+] Congratulations!\n" AC_RESET);

	invokeCommands(argv, argc);

	return EXIT_SUCCESS;
}