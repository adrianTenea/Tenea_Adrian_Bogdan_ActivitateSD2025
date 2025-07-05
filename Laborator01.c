#include<stdio.h>
#include<stdlib.h>

//creare structura Telefon
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
		printf("%d. Telefonul %s Seria %c are %d GB RAM si costa %5.2f RON.\n", t.id, t.producator, t.serie, t.RAM, t.pret);
	}
	else {
		printf("%d. Telefonul din seria %c are %d GB RAM si costa %5.2f RON.\n", t.id, t.serie, t.RAM, t.pret);
	}
	
}

void modificaPret(struct Telefon* t, float noulPret) {
	if (noulPret > 0) {
		t->pret = noulPret; // echivalent cu (*t).pret = noulPret;
	}
}

//functia de dezalocare
void dezalocare(struct Telefon* t) {
	if (t->producator != NULL) {
		free(t->producator);
		t->producator = NULL;
	}
}

int main() {
	//declarararea unei variabile numite t de tipul structurii Telefon
	struct Telefon t;

	//apelarea functiei de initializare
	t = initializare(1, 256, "Samsung", 2000.5, 'A');

	//apelarea functiei de afisare
	afisare(t);

	//apelarea functiei de modificare a pretului
	modificaPret(&t, 1000);

	//apelarea functiei de afisare - pentru a vedea modificarea pretului
	afisare(t);

	//apelarea functiei de dezalocare
	dezalocare(&t);

	//apelarea functiei de afisare - pentru a verifica daca s-a dezalocat
	afisare(t);

	return 0;
}