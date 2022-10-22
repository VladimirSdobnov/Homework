#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>

#define M_PI 3.14159265358979323846

float diagonal(int a, int b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}

int perimetr_sq(int a, int b) {
	return (a + b) * 2;
}

float perimetr_tr(int a, int b) {
	return diagonal(a, b) + a + b;
}

int sqr_sq(int a, int b) {
	return a * b;
}

float sqr_tr(int a, int b) {
	return a * b * 0.5;
}

float sqr_ball(int r) {
	return pow(r, 2) * M_PI;
}

float perimetr_ball(int r) {
	return 2 * r * M_PI;
}

int diametr(int r) {
	return r * 2;
}

int main() {
	setlocale(LC_ALL, "rus");

	printf("����� ����������!");
	Sleep(500);
	for (int i = 0; i < 2; i++) {
		system("cls");
		printf("�������� ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(". ");
		Sleep(500);
		printf(".");
		Sleep(500);
		system("cls");
	}
	
	int choose = 1000, a, b, r;
	while (choose != 0) {
		printf("����� ������: \n");
		printf("1. �������������.\n");
		printf("2. �����������.\n");
		printf("3. ����.\n");
		printf("0. ����� �� ����������.\n");
		printf("����: ");
		scanf_s("%d", &choose);
		if (choose == 1) {
			system("cls");
			printf("������� ��� ������� ��������������: ");
			scanf_s("%d %d", &a, &b);
			system("cls");
			while (choose < 4) {
				printf("����:\n");
				printf("1. ����� ������� ��������������.\n");
				printf("2. ����� �������� ��������������.\n");
				printf("3. ����� ��������� ��������������.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("������� ��������������: %d\n", sqr_sq(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("�������� ��������������: %d\n", perimetr_sq(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("��������� ��������������: %.2f\n", diagonal(a, b));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (choose == 2) {
			system("cls");
			printf("������� ��� ������� �������������� ������������: ");
			scanf_s("%d %d", &a, &b);
			system("cls");
			while (choose < 4) {
				printf("����:\n");
				printf("1. ����� ������� ������������.\n");
				printf("2. ����� �������� ������������.\n");
				printf("3. ����� ���������� ������������.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("������� ������������: %.2f\n", sqr_tr(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("�������� ������������: %.2f\n", perimetr_tr(a, b));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("���������� ������������: %.2f\n", diagonal(a, b));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		else if (choose == 3) {
			system("cls");
			printf("������� ������ ����������: ");
			scanf_s("%d", &r);
			system("cls");
			while (choose < 4) {
				printf("����:\n");
				printf("1. ����� ������� �����.\n");
				printf("2. ����� ����� ���������� �����.\n");
				printf("3. ����� ������� �����.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &choose);
				if (choose == 1) {
					printf("������� �����: %.2f\n", sqr_ball(r));
					system("pause");
					system("cls");
				}
				else if (choose == 2) {
					printf("����� ���������� �����: %.2f\n", perimetr_ball(r));
					system("pause");
					system("cls");
				}
				else if (choose == 3) {
					printf("������� �����: %d\n", diametr(r));
					system("pause");
					system("cls");
				}
				else {
					system("cls");
					break;
				}
			}
		}
		system("cls");
	}
	system("pause");
}