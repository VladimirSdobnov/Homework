#include <math.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int first;

	printf("��� ��������� ������� ��� ���������������� �����\n������� ������ �����: ");
	scanf_s("%d", &first);
	system("cls");

	printf("1: %d\n2: %d\n3: %d\n", first, first + 1, first + 2);
	system("pause");

	return 1;
}