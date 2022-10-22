#include <stdio.h>

int main() {
	int first, second, third;

	printf("This programm take you your type of study\n");

	printf("Enter your results with space: ");
	scanf_s("%d %d %d", &first, &second, &third);
	if (first - 2 <= 0 || second - 2 <= 0 || third - 2 <= 0) {
		printf("YOU ARE FOOL!!!");
	}
	else if (first == 3 || second == 3 || third == 3) {
		printf("You are bad student");
	}
	else if (first == 4 || second == 4 || third == 4) {
		printf("You are good student");
	}
	else {
		printf("You are the GENIUS student");
	}
	return 0;
}