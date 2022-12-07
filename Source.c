#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<locale.h>
int main() {
	char c, y;
	int number = 1, z, p,u;
	float res, sum = 0;
	setlocale(LC_ALL, "RUS");
	int points[6][8] = {
		{100 ,200 ,500 ,700 ,100 ,300 ,400 ,500 },
		{200 ,900 ,120 ,340 ,500 ,120 ,160 ,400 },
		{800 ,800 ,140 ,340 ,500 ,100 ,100 ,500 },
		{120 ,800 ,400 ,320 ,500 ,460 ,700 ,520 },
		{220 ,620 ,120 ,600 ,400 ,420 ,480 ,600 },
		{120 ,540 ,750 ,600 ,750 ,500 ,400 ,420 }
	};
	float arr[8];
	char human[6][17] = {
		{"Карлас Алькарас |"},
		{"Рафаэль Надаль  |"},
		{"Каспер Рууд     |"},
		{"Даниил Медведев |"},
		{"Стефанос Циципас|"},
		{"Александр Зверев|"},
	};
	int maxpoint[8] = { 800,900,750,700,750,500,700,600 };
	while (1) {
		puts("Выберите пункт из представленного списка : \n1)Вывод таблицы рейтинга спортсменов\n2)Результирующая таблица\n3)Результирующая таблица без какого-либо турнира\n4)Выход из программы");
		scanf("%c", &c);
		getchar();
		switch (c)
		{
		case '1':
			puts("\t\t Таблица рейтинга в 'Большем теннисе'");
			puts("  Участник      | ATP| WTA | AO |  GS |  RG |  Wd | US OP| ITF |");
			for (int i = 0; i < 6; i++)// количество строк
			{
				for (int j = 0; j < 17; j++) {
					printf("%c", human[i][j]);//вывод имён
				}
				for (z = 0; z < 8; z++) {
					printf("%d   ", points[i][z]);//вывод очков
				}puts("\n");

			}
			break;
		case '2':
			puts("\t\t Результирующая таблица рейтинга в 'Большем теннисе'");
			puts("  Участник      | ATP| WTA |  AO |  GS |  RG |  Wd | US OP| ITF| Всего очков|");
			for (int i = 0; i < 6; i++)// количество строк
			{
				for (int j = 0; j < 17; j++) {
					printf("%c", human[i][j]);//вывод имён
				}
				for (z = 0; z < 8; z++) {
					res = (float)points[i][z] / maxpoint[z];
					printf("%.2f   ", res);//вывод очков
					sum = sum + res;

				}
				printf("%.2f", sum);
				puts("\n");
				sum = 0;
			}
			break;
		case'3':
			puts("Введите номер турнира который не будет учитываться");
			puts("| ATP - 1 | WTA - 2 | AO - 3 | GS - 4 | RG - 5 | Wd - 6 | US OP - 7 | ITF - 8 |");
			scanf("%d", &u);
			puts("\t\t Результирующая таблица рейтинга в 'Большем теннисе'");
			puts("  Участник      | ATP| WTA |  AO |  GS |  RG |   Wd  | US OP  |  ITF | Всего очков|");
			for (int i = 0; i < 6; i++)// количество строк
			{
				for (int j = 0; j < 17; j++) {
					printf("%c", human[i][j]);//вывод имён
				}
				for (z = 0; z < 8; z++) {
					if (u == 1 && z==0)
						printf(" 0  ");
					if (u == 2 && z == 1)
						printf("0   ");
					if (u == 3 && z == 2)
						printf("0   ");
					if (u == 4 && z == 3)
						printf("0   ");
					if (u == 5 && z == 4)
						printf("0   ");
					if (u == 6 && z == 5)
						printf("0   ");
					if (u == 7 && z == 6)
						printf("0   ");
					if (u == 8 && z == 7)
						printf("0   ");
					else {
						res = (float)points[i][z] / maxpoint[z];
						printf("%.2f   ", res);//вывод очков
						sum = sum + res;
					}

				}
				printf("%.2f", sum);
				puts("\n");
				sum = 0;
			}
			break;

		case'4':
			exit(EXIT_SUCCESS);
			break;


		}
	}
}
