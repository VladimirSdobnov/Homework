#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int found(int* mass_1, int* mass_2, int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (mass_1[i] % 2 == 0) {
			k++;
		}
	}
	free(mass_2);
	mass_2 = (int*)malloc(sizeof(int) * k);
	k = 0;
	for (int i = 0; i < size; i++) {
		if (mass_1[i] % 2 == 0) {
			mass_2[k] = mass_1[i];
			k++;
		}
	}
	return k;
}

void sort(int* mass, int size) {
	int x;
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i + 1]) {
			x = mass[i];
			mass[i] = mass[i + 1];
			mass[i + 1] = x;
			i = 0;
		}
	}
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i + 1]) {
			x = mass[i];
			mass[i] = mass[i + 1];
			mass[i + 1] = x;
			i = 0;
		}
	}
}

void ch_sort(int* mass_1, int* mass_2, int size) {
	sort(mass_2, found(mass_1, mass_2, size));
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (mass_1[i] % 2 == 0) {
			mass_1[i] = mass_2[k];
			k++;
		}
	}
}

void show(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}

void generaterand(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 21 - 10;
	}
}

int main() {
	int size;
	printf("Enter size of massive: ");
	scanf_s("%d", &size);
	int* mass = (int*)malloc(sizeof(int) * size);
	int* mass_2 = (int*)malloc(sizeof(int) * 1);
	generaterand(mass, size);
	show(mass, size);
	printf("\n");
	ch_sort(mass, mass_2, size);
	show(mass, size);
}