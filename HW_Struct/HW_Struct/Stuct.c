#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define KEY_ENTER 13
#define KEY_SPACE 0

struct DIMENSIONS {
	int height;
	int width;
	int length;
};

struct DIMENSIONS entersize(int a, int b, int c) {
	struct DIMENSIONS size;
	size.height = a;
	size.width = b;
	size.length = c;
	return size;
}

int sqr_size(struct DIMENSIONS size) {
	return size.height * size.length + 2 + size.height * size.width * 2 + size.width * size.length * 2;
}

void paintingcost(struct DIMENSIONS size, float consupt, float workcost, float paintcost) {
	float summ = 0;
	summ += sqr_size(size) * 0,0001 * consupt * paintcost;
	summ += sqr_size(size) * workcost;
	printf("Стоимость покраски составит %d рублей", summ);
}

struct BOOK {
	char author[100];
	char title[100];
	char publisher[100];
	int year;
	int lists;
	int id;
};

struct PFCC {
	int protein;
	int fat;
	int carbohydrate;
	float calories;
};

struct SNP {
	char surname[50];
	char name[50];
	char patronymic[50];
};

void enterSNP(struct SNP *snp) {
	printf("Введите ФИО: ");
	scanf_s("%s", &snp->surname, 50);
	scanf_s("%s", &snp->name, 50);
	scanf_s("%s", &snp->patronymic, 50);
}

struct NOTEBOOK {
	int lists;
	int width;
	int length;
	char tipe[20];
	char manufacturer[100];
	int id;
};

struct DATE {
	int year;
	int month;
	int day;
};

struct DATE enterdate(struct DATE date) {
	struct DATE new;
	new.day = date.day;
	new.month = date.month;
	new.year = date.year;
	return new;
}

struct TIME {
	int hours;
	int minutes;
	int seconds;
	int miliseconds;
};

struct TIME entertime() {
	struct TIME time;
	int h, m, s, ms;
	printf("Введите время через точку: ");
	scanf_s("%d.%d.%d.%d", &h, &m, &s, &ms);
	time.hours = h;
	time.minutes = m;
	time.seconds = s;
	time.miliseconds = ms;
	return time;
}

struct JEANS {
	int size;
	char materials[100][50];
	char type[100];
	char manufacturer[100];
	int id;
};

struct TELEVISION {
	char name[100];
	char manufacturer[100];
	int heigth;
	int width;
	int length;
	float diagonal;
	char resolution[100];
	int id;
};

struct BODY {
	int heigth;
	float weight;
	float skull_volume;
	char race[20];
};

struct WORKER {
	struct SNP snp;
	struct DATE birth_date;
	float salary;
	char post[100];
	int id;
};

struct DISHES {
	int id;
	char name[50];
	struct PFCC pfcc;
};

struct STUDENT {
	struct SNP snp;
	struct DATE birth_date;
	char faculty[50];
	int id;
};

struct PATIENT {
	struct SNP snp_patient;
	struct SNP snp_doctor;
	struct DATE birth_date;
	char disease[100];
	int ward;
	int id;
};

struct HUMAN {
	struct SNP snp;
	struct DATE birth_date;
};



int main() {
	setlocale(LC_ALL, "rus");
	struct BOOK book = { "Кирилл Клеванский", "Сердце дракона", "Самиздат", 2022, 16073, 112345 };
	struct NOTEBOOK notebook = { 18, 9, 12, "в клеточку", "Архангельский деревообрабатывающий завод", 112346 };
	struct DATE date;
	date.day = 1;
	date.month = 1;
	date.year = 2023;
	struct STUDENT student = { { "Сдобнов", "Владимир", "Александрович" }, { 3, 3, 2004 }, "ИИТММ", 112347 };

	struct DISHES day_menu[3];
	struct DISHES dishes1 = { 1, "макароны с котлетой", {1, 1, 1, 1} };
	struct DISHES dishes2 = { 2, "макароны с котлетой", {2, 2, 2, 2} };
	struct DISHES dishes3 = { 3, "макароны с котлетой", {3, 3, 3, 3} };
	day_menu[0] = dishes1;
	day_menu[1] = dishes2;
	day_menu[2] = dishes3;

	struct HUMAN family[4];
	struct HUMAN father = { "Иванов", "Ким", "Иванович", 19, 3, 1956 };
	struct HUMAN mother = { "Иванова", "Ир", "Кирилловна", 24, 8, 1967 };
	struct HUMAN son = { "Иванов", "Сен", "Кимович", 7, 6, 1990 };
	struct HUMAN son1 = { "Иванов", "Мао", "Кимович", 7, 6, 1990 };
	family[0] = father;
	family[1] = mother;
	family[2] = son;
	family[3] = son1;

	struct SNP snp = { "1", "2", "3" };
	enterSNP(&snp);

	struct TIME time;
	time = entertime();

	struct DIMENSIONS size;
	size = entersize(12, 12, 12);

	struct DATE date = { 12, 12, 2012 };
	struct DATE new_date;
	new_date = enterdate(date);
}