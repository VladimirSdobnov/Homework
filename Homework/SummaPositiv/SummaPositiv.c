#include <stdio.h>
#include <locale.h>

int main() {
	int a = 2, sum = 0;
	setlocale(LC_ALL, "rus");
	printf("��� ��������� ������� ����� ������������� ����� ������������������\n");
	printf("������� ������������������: ");
	while (a != 0) {
		scanf_s("%d", &a);
		if (a > 0) {
			sum += a;
		}
		else {
			continue;
		}
	}
	printf("����� �����: %d", sum);
}