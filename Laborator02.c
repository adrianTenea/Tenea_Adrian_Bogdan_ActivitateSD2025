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

int main() {
	
	return 0;
}