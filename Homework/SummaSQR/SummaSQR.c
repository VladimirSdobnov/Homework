#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int size, sum = 0, a;
	printf("������ ��������� ������� ����� ���������");
	printf("������� ���������� ��������: ");
	scanf_s("%d", &size);
	printf("������� ��������: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &a);
		sum += a * a;
	}
	printf("����� ��������� �����: %d", sum);
}