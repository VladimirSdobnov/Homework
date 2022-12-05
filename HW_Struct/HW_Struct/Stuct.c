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

void entersize(struct DIMENSIONS *size) {
	printf("Введите высоту шкафа: ");
	scanf_s("%d", &size->height);
	printf("Введите длину шкафа: ");
	scanf_s("%d", &size->length);
	printf("Введите ширину шкафа: ");
	scanf_s("%d", &size->width);
}

float sqr_size(struct DIMENSIONS size) {
	float summ;
	summ = (size.height * size.length * 2 + size.height * size.width * 2 + size.width * size.length * 2) * 0.0001;
	return summ;
}

float paintingcost(struct DIMENSIONS size, float consupt, float workcost, float paintcost) {
	float summ = 0;
	summ += (float)sqr_size(size) * consupt * paintcost;
	summ += (float)sqr_size(size) * workcost;
	return summ;
}

float cupcost(struct DIMENSIONS size, float cupboardcost) {
	float summ = 0;
	summ += (float)sqr_size(size) * cupboardcost;
	return summ;
}

float masssize(struct DIMENSIONS size, float masspersqr) {
	float summ = 0;
	summ += (float)sqr_size(size) * masspersqr;
	return summ;
}

float uppingcost(struct DIMENSIONS size, int qua, float cost, float masspersqr, float rise) {
	float summ = 0;
	summ = masssize(size, masspersqr) * qua * cost + rise;
	return summ;
}

void totalcost(struct DIMENSIONS size, int qua, float cost, float masspersqr, float rise, float consupt, float workcost, float paintcost,
	float cupboardcost) {
	printf("Стоимость работ:\n");
	printf("%.2f - Шкаф\n", cupcost(size, cupboardcost));
	printf("%.2f - Покраска\n", paintingcost(size, consupt, workcost, paintcost));
	printf("%.2f - Доставка до квартиры\n", uppingcost(size, qua, cost, masspersqr, rise));
	printf("%.2f - Итоговая стоимость\n", cupcost(size, cupboardcost) + paintingcost(size, consupt, workcost, paintcost) + uppingcost(size, qua, cost, masspersqr, rise));
	system("pause");
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

	struct DIMENSIONS size = {1, 1, 1};
	system("cls");
	entersize(&size);
	printf("%d\n", size.height);
	printf("%f\n", sqr_size(size));
	totalcost(size, 5, 2.5, 0.9, 500, 0.8, 35.00, 50.00, 650);

	struct DATE date2 = { 12, 12, 2012 };
	struct DATE new_date;
	new_date = enterdate(date2);
}