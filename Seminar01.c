#include<stdio.h>

int main() {
	//citirea unei variabile intregi
	printf("Salutare!\nIntroduceti un numar intreg: ");
	int variabilaIntreaga = 0;
	scanf_s("%d", &variabilaIntreaga);
	printf("Ai introdus: %d", variabilaIntreaga);

	//citirea unei variabile reale
	printf("\nIntroduceti un numar real: ");
	float variabilaReala = 0.0;
	scanf_s("%f", &variabilaReala);
	printf("Ati introdus: %5.2f", variabilaReala);

	return 0;
}