#include <malloc.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <windows.h>
#include <conio.h>

#define MENU_SIZE 3
#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8
#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

void generaterand(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 2001 - 1000;
	}
}

void generatehandle(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);
	}
}

int maximum(int* mass, int size) {
	int maximum = MININT;
	for (int i = 0; i < size; i++) {
		if (mass[i] > maximum) {
			maximum = mass[i];
		}
	}
	return maximum;
}

int minimum(int* mass, int size) {
	int minimum = MAXINT;
	for (int i = 0; i < size; i++) {
		if (mass[i] < minimum) {
			minimum = mass[i];
		}
	}
	return minimum;
}

float sred(int* mass, int size) {
	int summ = 0;
	for (int i = 0; i < size; i++) {
		summ += mass[i];
	}
	return (float)summ / size;
}

void show(int* mass, int size) {
	printf("Elements of massive: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}

int main() {
	srand(time(0));

	system("title Action with massive");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);

	SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
	system("cls");

	int choose_pos = 0;
	int iKey;
	int exit_flag = 0;
	int* mass = (int*)malloc(sizeof(int) * 0);
	int size = 0, return_flag = 0;
	COORD cursorPos;

	char* menu[MENU_SIZE] = { "Start", "Settings", "Exit" };
	char* setting[4] = { "Generate random massive", "Handle generation", "Show masive", "Return" };
	char* start[4] = { "Found max elemant", "Found min element", "Found sr arifm", "Return" };

	while (!exit_flag) {

		return_flag = 0;

		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
			if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE; i++) {
				cursorPos = (COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("<<", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf(">>");

			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");
			choose_pos = 0;

			if (size < 1) {
				printf("Please, generate massive (you can do this in settings)\n");
				system("pause");
				return_flag = 1;
			}

			while (!return_flag) {
				system("cls");

				iKey = 67;
				cursorPos = (COORD){ 0, 0 };
				SetConsoleCursorPosition(hStdOut, cursorPos);

				while (iKey != KEY_ENTER) {
					switch (iKey) {
					case KEY_ARROW_UP:
						choose_pos--;
						break;
					case KEY_ARROW_DOWN:
						choose_pos++;
						break;
					}

					system("cls");

					if (choose_pos < 0) { choose_pos = 3; }
					if (choose_pos > 3) { choose_pos = 0; }

					for (int i = 0; i < 4; i++) {
						cursorPos = (COORD){ 3, i };
						SetConsoleCursorPosition(hStdOut, cursorPos);
						printf("%s \n", start[i]);
					}

					cursorPos = (COORD){ 0, choose_pos };
					SetConsoleCursorPosition(hStdOut, cursorPos);
					printf("<<", iKey);
					cursorPos = (COORD){ strlen(start[choose_pos]) + 3 + 1, choose_pos };
					SetConsoleCursorPosition(hStdOut, cursorPos);
					printf(">>");

					iKey = _getch();
				}
				switch (choose_pos) {
				case 0:
					system("cls");
					printf("Max element of massive is %d\n", maximum(mass, size));
					system("pause");
					break;
				case 1:
					system("cls");
					printf("Min element of masssive is %d\n", minimum(mass, size));
					system("pause");
					break;
				case 2:
					system("cls");
					printf("Sr arifm is %.2f\n", sred(mass, size));
					system("pause");
					break;
				case 3:
					return_flag = 1;
					break;
				}
			}
			break;
		case 1:
			system("cls");
			choose_pos = 0;
			while (!return_flag) {
				system("cls");

				iKey = 67;
				cursorPos = (COORD){ 0, 0 };
				SetConsoleCursorPosition(hStdOut, cursorPos);

				while (iKey != KEY_ENTER) {
					switch (iKey) {
					case KEY_ARROW_UP:
						choose_pos--;
						break;
					case KEY_ARROW_DOWN:
						choose_pos++;
						break;
					}

					system("cls");

					if (choose_pos < 0) { choose_pos = 3; }
					if (choose_pos > 3) { choose_pos = 0; }

					for (int i = 0; i < 4; i++) {
						cursorPos = (COORD){ 3, i };
						SetConsoleCursorPosition(hStdOut, cursorPos);
						printf("%s \n", setting[i]);
					}

					cursorPos = (COORD){ 0, choose_pos };
					SetConsoleCursorPosition(hStdOut, cursorPos);
					printf("<<", iKey);
					cursorPos = (COORD){ strlen(setting[choose_pos]) + 3 + 1, choose_pos };
					SetConsoleCursorPosition(hStdOut, cursorPos);
					printf(">>");

					iKey = _getch();
				}
				switch (choose_pos) {
				case 0:
					system("cls");
					printf("Enter size of massive: ");
					scanf_s("%d", &size);
					while (size < 1) {
						system("cls");
						printf("Enter correct size of massive: ");
						scanf_s("%d", &size);
					}
					free(mass);
					mass = (int*)malloc(sizeof(int) * size);
					generaterand(mass, size);
					show(mass, size);
					printf("\n");
					system("pause");
					break;
				case 1:
					system("cls");
					printf("Enter size of massive: ");
					scanf_s("%d", &size);
					while (size < 1) {
						system("cls");
						printf("Enter correct size of massive: ");
						scanf_s("%d", &size);
					}
					free(mass);
					mass = (int*)malloc(sizeof(int) * size);
					printf("Enter elements: ");
					generatehandle(mass, size);
					break;
				case 2:
					if (size < 1) {
						printf("Please, generate massive\n");
						return_flag = 1;
					}
					else {
						system("cls");
						show(mass, size);
						printf("\n");
						system("pause");
					}
					break;
				case 3:
					return_flag = 1;
					printf("\n");
					break;
				}
			}
			break;
		case 2:
			exit_flag = 1;
			break;
		}
	}

	system("cls");
	printf("Goodbay!\n");

	system("pause");
	return 0;
}