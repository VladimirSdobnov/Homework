#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b, summa, razn, proizv, mod;
	float chastn, sr_arif_sq, sr_arif_abs;

	printf("��� ��������� ������� �����, ��������, ������������, �������, ������� �������������� ��������� � ������� � ����� ������� �� ������� ���� �����\n ������� ��� ����� ����� ������: ");
	scanf_s("%d %d", &a, &b);

	summa = a + b;
	razn = a - b;
	proizv = a * b;
	chastn = (float)a / b;
	sr_arif_sq = (pow(a, 2) + pow(b, 2)) * 0.5;
	sr_arif_abs = (abs(a) + abs(b)) * 0.5;
	mod = a % b;

	printf("%d %d %d %.2f %.2f %.2f %d", summa, razn, proizv, chastn, sr_arif_sq, sr_arif_abs, mod);
	return 1;
}