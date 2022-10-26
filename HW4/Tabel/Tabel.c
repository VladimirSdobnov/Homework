#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>

void generate_tabel(HANDLE hStdOut, int STOLB_Q, int STRING_Q, char** STOLB_NAME, char*** STRNG_NAME) {

}
void Enter_Name(char** STRING, int size) {
	for (int i = 0; i < size; i++) {
		gets(STRING[i]);
	}
}

void show(int* mass, int size) {
	printf("Elements of massive: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}

int main() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
	char** STRING;
	int size;
	scanf_s("%d", &size);
	STRING = (char**)malloc(sizeof(char*) * size);
	for (int i = 0; i < size; i++) {
		STRING[i] = (char*)malloc(sizeof(char) * 100);
	}
	Enter_Name(STRING, size);
	for (int i = 0; i < size; i++) {
		puts(STRING[i]);
	}
	
}