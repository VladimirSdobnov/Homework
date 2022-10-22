#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	int x, y, z;

	printf("Эта программа переведена с псевдокода\n");
	printf("Введите х: ");
	scanf_s("%d", &x);
	printf("Введите y: ");
	scanf_s("%d", &y);
	printf("Введите z: ");
	scanf_s("%d", &z);

	if (x != y && z != x && y != z) {
		if (x > y && x > z) {
			z += x;
		}
		else if (y > z) {
			z += y;
		}
		else {
			z *= z;
		}
		printf("%d", z);
	}
	else {
		if (x == y && y == z) {
			printf("Все переменные равны\n");
		}
		else if (x == y) {
			printf("x = y");
		}
		else if (x == z) {
			printf("x = z");
		}
		else {
			printf("y = z");
		}
	}
	return 0;
}