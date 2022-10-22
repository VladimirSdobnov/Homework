#include <stdio.h>
#include <math.h>
#include <locale.h>

int max(int a, int b, int c) {
	int max = a;
	if (a >= b && a >= c) {
		return max;
	}
	else if (b >= c && b >= a) {
		max = b;
		return max;
	}
	else {
		max = c;
		return max;
	}
}
int min(int a, int b, int c) {
	int min = a;
	if (a <= b && a <= c) {
		return min;
	}
	else if (b <= c && b <= a) {
		min = b;
		return min;
	}
	else {
		min = c;
		return min;
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	printf("��� ��������� ���������� ��� ������������ �� ��� ��������\n");
	
	int AB, BC, AC, sred, maxi, mini;
	float cosinus;

	printf("������� ����� ������ ����� ������: ");
	scanf_s("%d %d %d", &AB, &BC, &AC);
	 
	if (AB <= 0 || BC <= 0 || AC <= 0) {
		printf("����� ������ ��� ������������� �����");
	}
	else if (AB + BC < AC || AB + AC < BC || BC + AC < AB) {
		printf("�� ���������� ������������ � ������ ���������");
	}
	else if (AB + BC == AC || AB + AC == BC || BC + AC == AB) {
		printf("��� ������� ������ ����������� �����������");
	}
	else {
		maxi = max(AB, BC, AC);
		mini = min(AB, BC, AC);
		sred = AB + BC + AC - maxi - mini;
		cosinus = (float) (pow(sred, 2) + pow(mini, 2) - pow(maxi, 2)) / (2 * sred * mini);

		if (cosinus == 0) {
			printf("���� ����������� �������������");
		}
		else if (cosinus < 0) {
			printf("���� ����������� ������������");
		}
		else {
			printf("��� ����������� �������������");
		}
		if (AB == BC && AC == BC) {
			printf(" � ��������������");
		}
		else if (AB == BC || AC == BC || AB == AC) {
			printf(" � ��������������");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}