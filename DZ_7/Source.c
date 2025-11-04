#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	char c;
	printf("Введите одну из первых 10 букв английского алфавита: ");
	scanf("%c", &c);
	switch (c)
	{
		case 'a':
			printf("Введена 1 буква");
			break;
		case 'b':
			printf("Введена 1 буква");
			break;
		case 'c':
			printf("Введена 1 буква");
			break;
		case 'd':
			printf("Введена 1 буква");
			break;
		case 'e':
			printf("Введена 1 буква");
			break;
		case 'f':
			printf("Введена 1 буква");
			break;
		case 'g':
			printf("Введена 1 буква");
			break;
		case 'h':
			printf("Введена 1 буква");
			break;
		case 'i':
			printf("Введена 9 буква");
			break;
		case 'j':
			printf("Введена 10 буква");
			break;
		default:
			printf("Буква не входит в диапазон");
	}

	return 0;
}
