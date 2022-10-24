#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define KEY_ENTER 13

void scan_string(char* str) {
	char key = 1;
	int i = 0;
	while (key != '\n') {
		key = getchar();
		str[i] = key;
		i++;
	}
}

int size(char* str) {
	int i = 0;
	while (str[i] != '\n') {
		i++;
	}
	return i + 1;
}

void show(char* str, int size) {
	for (int i = 0; i < size; i++) {
		printf("%c", str[i]);
	}
}

void unity(char* str_1, char* str_2, char* str_3) {
	for (int i = 0; i < size(str_1) - 1; i++) {
		str_3[i] = str_1[i];
	}
	for (int i = 0; i < size(str_2); i++) {
		str_3[size(str_1) - 1 + i] = str_2[i];
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* str_1 = (char*)malloc(sizeof(char) * 100);
	char* str_2 = (char*)malloc(sizeof(char) * 100);
	char* str_un = (char*)malloc(sizeof(char) * 200);
	char key = 1;
	printf("Enter first string: ");
	scan_string(str_1);
	printf("Enter second string: ");
	scan_string(str_2);
	unity(str_1, str_2, str_un);
	printf("New string: ");
	show(str_un, size(str_un));
}