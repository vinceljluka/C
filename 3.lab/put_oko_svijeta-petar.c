/*
Nakon povratka sa kru�nog putovanja po svijetu, malog Petra svi pitaju o detaljima avionskih tro�kova. Da bi olak�ao evidenciju, odlu�io je zamoliti svoje prijatelje programere za pomo�. Petru je potreban program u koji �e prvo unijeti broj etapa putovanja N (kojih nikad nije manje od 3, a vi�e od 20).
Nakon toga, Petar �eli u niz unijeti N cijena avionskih karata u eurima (za svaku etapu puta), a usput vam spominje da cijena jedne etape nikad nije manja od 25 eura, niti ve�a od 1300 eura.
Kod svakog unosa broja izvan zadanih granica, program mora ispisati poruku "Broj je izvan granica intervala.
Radi toga �to ve�ina Petrovih prijatelja �eli podatke u kunama, Petru je bitno saznati kolika je cijena svake etape u doma�oj valuti te �eli da se u poseban niz u obrnutom redoslijedu od onog u prvom nizu upi�u sve cijene u kunama, ako se za te�aj uzme da je 1 euro = 7.6 kuna.
Osim toga, Petru je bitan i podatak o ukupnim tro�kovima putovanja.
Program mora ispisati ukupnu cijenu svih avionskih karata u kunama i novi niz.

Test case #1 Primjer ulaza:
4
25.5
100
525
Primjer izlaza:
Ukupna cijena avionskih karata iznosi
5340.52 kuna.
Niz u kunama: 396.72 3990.00 760.00 193.80
52.20



*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define TECAJ 7.6

int main() {
	int N = 0, brojacN=-1, brojacKarte=-1;
	float karteKn[20] = { 0 }, karteEur[20]={0}, ukupnaCijena=0;

	do {
		scanf("%d", &N);
		brojacN++;
	} while (N < 3 || N >20);

	for (int i = 0; i < N; i++) {
		do {
			scanf("%f", &karteEur[i]);
			brojacKarte++;
		} while (karteEur[i] < 25 || karteEur[i]>1300 );
		ukupnaCijena += karteEur[i];
	}
	ukupnaCijena *= TECAJ;

	for (int i = 0; i < brojacN; i++) {
		printf("Broj je izvan granica intervala.\n");
	}

	for (int i = 0; i <= brojacKarte-N; i++) {
		printf("Broj je izvan granica intervala.\n");
	}
	printf("Ukupna cijena avionskih karata iznosi\n%.2f kuna.\n", ukupnaCijena);
	printf("Niz u kunama: ");
	for (int j = 1; j <=N; j++) {
		karteKn[j] = karteEur[N-j] * TECAJ;
		printf("%.2f ", karteKn[j]);
	}


	return 0;
}