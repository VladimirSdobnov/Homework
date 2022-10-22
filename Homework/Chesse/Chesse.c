#include <stdio.h>
#include <locale.h>

int king(int x1, int x2, int y1, int y2) {
	if (abs(x1 - x2) <= 1 && abs(y1 - y1) <= 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int tower(int x1, int x2, int y1, int y2) {
	if (x1 == x2 || y1 == y2) {
		return 5;
	}
	else {
		return 0;
	}
}

int general(int x1, int x2, int y1, int y2) {
	if (abs(x1 - x2) == abs(y1 - y2)) {
		return 3;
	}
	else {
		return 0;
	}
}

int cavalry(int x1, int x2, int y1, int y2) {
	if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) {
		return 4;
	}
	else {
		return 0;
	}
}

int queen(int x1, int x2, int y1, int y2) {
	if ((x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2))) {
		return 2;
	}
	else {
		return 0;
	}
}



int main() {
	setlocale(LC_ALL, "rus");

	int  y1, y2, figure, K, Q, C, G, T, flag = 0
		;
	char x1, x2;

	printf("Эта программа проверяет допустимость хода фигурой в шахматах\n");

	printf("Введите фигуру, ход которой вы хотите проверить (1 - король, 2 - королева, 3 - слон, 4 - конь, 5 - ладья): ");
	scanf_s("%d", &figure);
	getchar();
	
	printf("Введите стартовую клетку: ");
    x1 = getchar() - 96;
	getchar();
	scanf_s("%d", &y1);
	getchar();
	printf("Введите конечную клетку: ");
	x2 = getchar() - 96;
	getchar();
	scanf_s("%d", &y2);

	if (x1 <= 0 || x2 <= 0 || y1 <= 0 || y1 > 8 || y2 <= 0 || y2 > 8 || x1 > 8 || x2 > 8) {
		printf("Некоректные клетки\n");
		return 0;
	}
	K = king(x1, x2, y1, y2);
	Q = queen(x1, x2, y1, y2);
	G = general(x1, x2, y1, y2);
	T = tower(x1, x2, y1, y2);
	C = cavalry(x1, x2, y1, y2);
	if (figure == K || figure == Q || figure == G || figure == C || figure == T) {
		printf("Корректный ход");
	}
	else {
		printf("Данная фигура не может сходить на заданную клетку\n");
		if (K > 0) {
			printf("Зато король может\n");
			flag = 1;
		}
		if (Q > 0) {
			printf("Зато королева может\n");
			flag = 1;
		}
		if (G > 0) {
			printf("Зато слон может\n");
			flag = 1;
		}
		if (C > 0) {
			printf("Зато конь может\n");
			flag = 1;
		}
		if (T > 0) {
			printf("Зато ладья может\n");
			flag = 1;
		}
		if (flag != 1) {
			printf("И никто так не может");
		}
	}
}