/*
Na autoputu kod svakog izlaza postoji ure�aj koji bilje�i vrijeme prolaza za svaki automobil. Va� zadatak je iz podataka za jedan automobil, odrediti na kojoj je dionici vozio najbr�e, te kolika je ukupna prosje�na brzina za prolazak cijelog autoputa.
Na po�etku je potrebno u�itati broj N, koji ozna�ava broj postaja na kojima se mjeri prolazno vrijeme. U svakom retku se nalaze 4 broja 1. ozna�ava na kojem je kilometru autoputa mjerni ure�aj, dok ostala 3 broja ozna�avaju sat, minute i sekunde prolaza automobila.

Test case #1
Postoje 3 mjerne postaje na 10., 25. i 45. kilometru. 
�to zna�i da prva dionica ima 10km, druga 15km a tre�a 20km. 1. Dionicu je auto pro�ao za 5min, drug u isto za 5min a tre�u za 15min.
Primjer ulaza:
3
10 0 5 0
25 0 10 0
45 0 25 0
Primjer izlaza:
Najbrza dionica: dionica br. 2, brzina: 180.00 km/h 
Ukupna prosjecna brzina: 108.00 km/h
Test case #2
Samo je jedna dionica autoputa, duljine 100km i trebalo je 1h za prolaz, �to zna�i da je prosje�na brzina 100 km/h.
Primjer ulaza:
1
100 1 0 0
Primjer izlaza:
Najbrza dionica: dionica br. 1, brzina: 100.00 km/h Ukupna prosjecna brzina: 100.00 km/h
Ukupna prosjecna brzina: 100.00km/h
Test case #3
Primjer ulaza:
5
12 0 13 16
17 8 21 44
44 0 47 51
177 1 39 38
Primjer izlaza:
Najbrza dionica: dionica br. 4, brzina: 154.10 km/h Ukupna prosjecna brzina: 106.46 km/h
Ukupna prosjecna brzina: 106.46km/h
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	int N, najbrzaDionica = 0, brojDionice = 0 ;
	float vrijemeDionice=0, dionica = 0, ukupnaKm = 0, sat, minute, sekunde,ukupnoVrijeme = 0, najbrzaDionicaDoSada = 0, vrijemeDioniceUkupne = 0, duljinaDioniceUkupna = 0;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%f %2f %2f %2f", &dionica, &sat, &minute, &sekunde);
		if (i == N) {
			duljinaDioniceUkupna = dionica;
			vrijemeDioniceUkupne = sat + (minute / 60) + (sekunde / 3600);
		}
		vrijemeDionice = sat + (minute / 60) + (sekunde / 3600);
		dionica -= ukupnaKm;
		vrijemeDionice -= ukupnoVrijeme;
		najbrzaDionica = dionica / vrijemeDionice;
		if (najbrzaDionica > najbrzaDionicaDoSada) {
			ukupnaKm += dionica;
			ukupnoVrijeme += vrijemeDionice;
			najbrzaDionicaDoSada = najbrzaDionica;
			brojDionice = i;
		}
		
	}
	printf("Najbrza dionica: dionica br. %d, brzina: %.2f km/h\n", brojDionice, najbrzaDionicaDoSada);
	printf("Ukupna prosjecna brzina: %.2f km/h", duljinaDioniceUkupna / vrijemeDioniceUkupne);


	return 0;
}