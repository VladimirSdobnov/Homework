#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int size, sum = 0, a;
	printf("Данная программа считает сумму квадратов");
	printf("Введите количество значений: ");
	scanf_s("%d", &size);
	printf("Введите значения: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &a);
		sum += a * a;
	}
	printf("Сумма квадратов равна: %d", sum);
}