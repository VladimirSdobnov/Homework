#include <math.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int a, S_all, S_bok, V;

	printf("��� ��������� ������� ������ ������� ����������� � ���� ����������� ����, � ����� ��� �����\n������� ����� ������� ����: ");
	scanf_s("%d", &a);
	printf("\n");

	V = pow(a, 3);
	S_all = pow(a, 2) * 6;
	S_bok = pow(a, 2) * 4;

	printf("������� ���� ����� %d\n������� ������� ����������� ����� %d\n������� ����������� ����� %d\n", V, S_bok, S_all);
	system("pause");

	return 1;
}