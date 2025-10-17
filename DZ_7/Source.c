#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	char c;
	printf("¬ведите одну из первых 10 букв английского алфавита: ");
	scanf("%c", &c);
	switch (c)
	{
		case 'a':
			printf("¬ведена 1 буква");
			break;
		case 'b':
			printf("¬ведена 2 буква");
			break;
		case 'c':
			printf("¬ведена 3 буква");
			break;
		case 'd':
			printf("¬ведена 4 буква");
			break;
		case 'e':
			printf("¬ведена 5 буква");
			break;
		case 'f':
			printf("¬ведена 6 буква");
			break;
		case 'g':
			printf("¬ведена 7 буква");
			break;
		case 'h':
			printf("¬ведена 8 буква");
			break;
		case 'i':
			printf("¬ведена 9 буква");
			break;
		case 'j':
			printf("¬ведена 10 буква");
			break;
		default:
			printf("Ѕуква не входит в диапазон");
	}

	return 0;
}