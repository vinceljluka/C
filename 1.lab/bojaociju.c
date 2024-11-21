//Napi�ite program koji �e na temelju boje o�iju roditelja odrediti koju boju o�iju mo�e imati njihovo dijete.
//Boja o�iju djeteta odre�uje se prema sljede�im pravilima :
//Program kao ulazni parametar prima�2 znaka koji predstavljaju boju o�i roditelja, gdje :
//
//	sme�e o�i mogu biti unesene znakom S ili s
//
//	zelene o�i mogu biti unesene znakom Z ili z
//
//	plave o�i mogu biti unesene znakom P ili p


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {

	char oko1, oko2;
	int rezultat;
	scanf("%c %c", &oko1, &oko2);
	oko1 = tolower(oko1);
	oko2 = tolower(oko2); // Po�to je potrebno napraviti unos i za veliko i malo slovo, ova komanda �e nebitno unesemo li veliko ili malo slovo, transformirati ga u malo

	rezultat = oko1 + oko2;

	// zbrojimo 2 slova te pomo�u ASCII tablice dobijemo rezultat koji koristimo u switch caseu
	// npr s(115 broj u ASCII tablici) + s(115) = 230 , stavimo case 230: i isprintamo rezultat koji treba, i tako i za ostale kombinacije
	// tako�er mo�emo i direktno u case staviti 's'+'s', te �e program sam automatski to zbrojiti i usporediti sa rezultatom

	switch (rezultat)
	{
	case 's'+'s':
		printf("75%%");
		break;
	case 'z'+'s':
		printf("50%%");
		break;
	case 'p' + 's':
		printf("50%%");
		break;
	case 'z' + 'z':
		printf("<1%%");
		break;
	case 'z' + 'p':
		printf("0%%");
		break;
	case 'p' + 'p':
		printf("0%%");
		break;
	default:
		printf("Krivi unos!");
		break;
	}
	

	return 0;
}