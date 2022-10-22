#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>

#define M_PI 3.14159265358979323846

float diagonal(int a, int b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}

int perimetr_sq(int a, int b) {
	return (a + b) * 2;
}

float perimetr_tr(int a, int b) {
	return diagonal(a, b) + a + b;
}

int sqr_sq(int a, int b) {
	return a * b;
}

float sqr_tr(int a, int b) {
	return a * b * 0.5;
}

float sqr_ball(int r) {
	return pow(r, 2) * M_PI;
}

float perimetr_ball(int r) {
	return 2 * r * M_PI;
}

int diametr(int r) {
	return r * 2;
}

int main() {
	setlocale(LC_ALL, "rus");

	printf("Добро пожаловать!");
	Sleep(500);
	for (int i = 0; i < 2; i++) {
		system("cls");
		printf("Загрузка ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(".");
		Sleep(500);
		system("cls");
	}
	
	int choose = 1000, a, b, r;
	while (choose != 0) {
		printf("Выбор фигуры: \n");
		printf("1. Прямоугольник.\n");
		printf("2. Треугольник.\n");
		printf("3. Круг.\n");
		printf("0. Выйти из приложения.\n");
		printf("Ввод: ");
		scanf_s("%d", &choose);
		if (choose == 1) {
			system("cls");
			printf("Введите две стороны прямоугольника: ");
			scanf_s("%d %d", &a, &b);
			system("cls");
			while (choose < 4) {
				printf("Меню:\n");
				printf("1. Найти площадь прямоугольника.\n");
				printf("2. Найти периметр прямоугольника.\n");
				printf("3. Найти диагональ прямоугольника.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("Площадь прямоугольника: %d\n", sqr_sq(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("Периметр прямоугольника: %d\n", perimetr_sq(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("Диагональ прямоугольника: %.2f\n", diagonal(a, b));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (choose == 2) {
			system("cls");
			printf("Введите две стороны прямоугольного треугольника: ");
			scanf_s("%d %d", &a, &b);
			system("cls");
			while (choose < 4) {
				printf("Меню:\n");
				printf("1. Найти площадь треугольника.\n");
				printf("2. Найти периметр треугольника.\n");
				printf("3. Найти гипотенузу треугольника.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("Площадь треугольника: %.2f\n", sqr_tr(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("Периметр треугольника: %.2f\n", perimetr_tr(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("Гипотенуза треугольника: %.2f\n", diagonal(a, b));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (choose == 3) {
			system("cls");
			printf("Введите радиус окружности: ");
			scanf_s("%d", &r);
			system("cls");
			while (choose < 4) {
				printf("Меню:\n");
				printf("1. Найти площадь круга.\n");
				printf("2. Найти длину окружности круга.\n");
				printf("3. Найти диаметр круга.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("Площадь круга: %.2f\n", sqr_ball(r));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("Длина окружности круга: %.2f\n", perimetr_ball(r));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("Диаметр круга: %d\n", diametr(r));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		system("cls");
	}
	system("pause");
}