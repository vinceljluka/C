//Spolizacija je proces u birokraciji kojim se na temelju JMBG broja gra�ana odre�uje kojeg je spola gra�anin.Za Zagreb vrijedi sljede�e pravilo kod JMBG brojeva : prvih 7 znamenki nastaje iz datuma ro�enja, nakon toga 330 ako se radi o mu�karcu, 335 ako se radi o �eni.Algoritam za zadnje 3 znamenke je u na�em slu�aju nebitan, i recimo da su zadnje 3 znamenke proizvoljne.
//
//Primjer jednog JMBG - a mu�karca ro�enog na datum 04.07.2010. :
//	0407010330007 (test case 1)
//	Primjer jednog JMBG - a �ene ro�ene na datum 12.03.1996. :
//	1203996335909 (test case 2)
//
//	Dodatno, spolizaciju obavlja tek referent po�etnik, te zbog ne snala�enja u poslu unosi JMBG znamenku po znamenku u svaki redak.Va�a je zada�a napisati program u kojem �e on unijeti znamenku po znamenku i po unosu svih 13 znamenki, program ispisuje �Mu�ka osoba� ukoliko se radi o mu�karcu ili ��enska osoba� ukoliko se radi o �eni.


//Test case #1
//Primjer ulaza :
//0
//4
//0
//7
//0
//1
//0
//3
//3
//0
//0
//0
//7
//
//Primjer izlaza :
//Musko!
//Test case #2
//Primjer ulaza :
//1
//2
//0
//3
//9
//9
//6
//3
//3
//5
//9
//0
//9
//
//Primjer izlaza :
//Zensko!
//Test case #3
//Primjer ulaza :
//1
//2
//0
//3
//9
//9
//6
//3
//3
//4
//9
//0
//9
//
//Primjer izlaza :
//Greska!



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int JMBAG = 0;
	int spol = 0;

	for (int i = 0; i < 13; i++) {
		scanf("%d", &JMBAG);
		if (i == 9) {
			spol = JMBAG;
		}
	}

	if (spol == 0) {
		printf("Musko!");
	}
	else if (spol == 5) {
		printf("Zensko!");
	}
	else {
		printf("Greska!");
	}

	return 0;
}