#include <math.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int x1, y1, x2, y2, x3, y3;
	float S, p, AB, BC, AC;

	printf("��� ��������� ������� ������� ������������ � ������� ��������� ��� ������\n������� ���������� ������ ����� ����� �������: ");
	scanf_s("%d,%d", &x1, &y1);
	system("cls");

	printf("������� ���������� ������ ����� ����� �������: ");
	scanf_s("%d,%d", &x2, &y2);
	system("cls");
	
	printf("������� ���������� ������� ����� ����� �������: ");
	scanf_s("%d,%d", &x3, &y3);
	system("cls");

	AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	
	if ((AB + BC <= AC) && (BC + AC <= AB) && (AB + AC <= BC))
	{
		printf("������������ � ��������� �(%d,%d), �(%d,%d), �(%d,%d) �� ����������\n", x1, y1, x2, y2, x3, y3);
		system("pause");

		return 0;
	}

	p = (AB + BC + AC) * 0.5;
	S = sqrt(p * (p - AB) * (p - BC) * (p - AC));

	printf("�������� ������������ � ��������� �(%d,%d), �(%d,%d), �(%d,%d) �����: %.2f\n", x1, y1, x2, y2, x3, y3, p * 2);
	printf("������� ������������ � ��������� �(%d,%d), �(%d,%d), �(%d,%d) �����: %.2f\n", x1, y1, x2, y2, x3, y3, S);
	system("pause");

	return 1;
}