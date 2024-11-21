//Dobili ste posao u startupu koji je izmislio tehonologiju proizvodnje dijamanta po narud�bi.Zadatak Vam je proizvesti "savr�ene" dijamante sa specificiranim brojem karata kako bi zadovoljili to�no odre�ene potrebe tr�i�ta.Svima je poznato kako "savr�eni" dijamanti imaju neparan broj karata.
//Potrebno je isprogramirati funkciju koja pronalazi dijamant od znakova '*' na na�in da kao ulazni parametar uzmete naru�eni broj karata dijamanta.Ukoliko iz skladi�ta naru�e dijamant sa pogre�nim brojem karata potrebno je ispisati poruku : "Pogreska: Zadani dijamant nije savrsen!"
//
//Test case #1
//Ulaz je broj 1
//Primjer ulaza :
//1
//Primjer izlaza :
//
//*
//Test case #2
//Ulaz je broj 3
//Primjer ulaza :
//3
//Primjer izlaza :
//
//*
//***
//*
//Test case #3
//Ulaz je broj 5
//Primjer ulaza :
//5
//Primjer izlaza :
//
//*
//***
//*****
//***
//*
//Test case #4
//Ulaz je broj 8
//Primjer ulaza :
//8
//Primjer izlaza :
//Pogreska: Zadani dijamant nije savrsen!


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	int karat, n = 1, z;

	scanf("%d", &karat);

	if (karat % 2 == 0) {
		printf("Pogreska: Zadani dijamant nije savrsen!");
	}

	else {
		printf("\n");
		while (n <= karat) {
			for (int i = 0; i < n; i++) {
				printf("*");
			}
			printf("\n");
			n += 2;
		}
		n = 1;
		z = karat-2;
		while (n <= karat) {

			for (int i = 0; i < z; i++) {
				printf("*");
			}
			printf("\n");
			z -= 2;
			n += 2;
		}
	}

	

	return 0;
}