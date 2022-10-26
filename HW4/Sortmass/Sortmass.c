#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

void generaterand(int* mass, int size) {
	for (int i = 0; i < size; i++) {
		mass[i] = rand() % 2001 - 1000;
	}
}

void swap(int* mass, int a, int b) {
	int c;
	c = mass[a];
	mass[a] = mass[b];
	mass[b] = c;
}

void sort_ch(int* mass, int size) {
	int i = 0;
	int k = 0;
	int flag = 1;
	int flag_exit = 0;
	int b = -1;
	while (flag_exit != size + 1) {
		if (i == size) {
			flag = 1;
			i = -1;
			flag_exit++;
		}
		else {
			if (mass[i] % 2 == 0 && flag) {
				k = i;
				if (k > b) {
					flag = 0;
					b = k;
				}
			}
			if (!flag && mass[i] < mass[k] && mass[i] % 2 ==0) {
				swap(mass, i, k);
			}
		}
		i++;
	}
}

void show(int* mass, int size) {
	printf("Elements of massive: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", mass[i]);
	}
}

int main() {
	srand(time(0));
	int size;
	int* mass;

	printf("Enter size of massive: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	generaterand(mass, size);
	show(mass, size);
	printf("\n");
	sort_ch(mass, size);
	show(mass, size);
}