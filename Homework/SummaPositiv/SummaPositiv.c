#include <stdio.h>
#include <locale.h>

int main() {
	int a = 2, sum = 0;
	setlocale(LC_ALL, "rus");
	printf("Эта программа считает сумму положительных чисел последовательности\n");
	printf("Введите последовательность: ");
	while (a != 0) {
		scanf_s("%d", &a);
		if (a > 0) {
			sum += a;
		}
		else {
			continue;
		}
	}
	printf("Сумма равна: %d", sum);
}