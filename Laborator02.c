#include<stdio.h>
#include<stdlib.h>

//declararea structurii Telefon
struct Telefon {
	int id;
	int RAM;
	char* producator;
	float pret;
	char serie;
};

//functia de initializare
struct Telefon initializare(int id, int ram, const char* producator, float pret, char serie) {
	struct Telefon t;
	t.id = id;
	t.RAM = ram;
	t.producator = (char*)malloc(sizeof(char) * (strlen(producator) + 1));
	strcpy_s(t.producator, strlen(producator) + 1, producator);
	t.pret = pret;
	t.serie = serie;
	return t;
}

//functia de afisare
void afisare(struct Telefon t) {
	if (t.producator != NULL) {
		printf("%d. Telefonul %s Seria %c are %d GB RAM si costa %5.2f RON", t.id, t.producator, t.serie, t.RAM, t.pret);
	}
	else {
		printf("%d. Telefonul din seria %c are %d GB RAM si costa %5.2f RON", t.id, t.serie, t.RAM, t.pret);
	}
}

int main() {
	//declarare variabila de tip structura Telefon
	struct Telefon t;
	
	return 0;
}