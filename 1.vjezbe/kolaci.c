//Perici je mama dala d�eparac za �lolu, a on ga je odlu�io potro�iti na kola�e u slasti�arni.
//Slasti�arna nudi kola�e razli�itih oblika, veli�ina i cijena.
//Perica treba program u koji unosi iznos d�eparca, broj stranica, duljinu stranice, visinu kola�a(sve u cm) i cijenu jednog komada(u kn).
//Program ispisuje koliko kola�a mo�e kupiti i kolika je isplativost(koliko kuna plati za jedan cm ^ 3 kola�a).
//
//Broj stranica kola�a ne smije biti manji od 3. Duljina stranice moraju biti 0 ili ve�i.Ukoliko je unos krivi, ispisati "Krivi unos! Molim probajte opet." i �ekati na novi unos.
//
//Napomene:
//uklju�iti #include <math.h>
//formula za volumen jednog kola�a : V = h * n * (a ^ 2) * (cos(3.14 / n) / sin(3.14 / n)) / 4
//isplativost = cijena jednog kola�a / volumen jednog kola�a

//Test case #1
//Mogu�e je kupiti samo cijeli broj kola�a!
//Primjer ulaza :
//1003 3 5 2 10
//Primjer izlaza :
//Perica moze kupiti : 100 kolaca, a platit ce 0.46kn / cm ^ 3.
//Test case #2
//Primjer ulaza :
//67 2 6 2 1 3
//Primjer izlaza :
//Krivi unos!Molim probajte opet.
//Perica moze kupiti : 22 kolaca, a platit ce 0.29kn / cm ^ 3.
//Test case #3
//Primjer ulaza :
//5 3 4 1 7
//Primjer izlaza :
//Perica moze kupiti : 0 kolaca, a platit ce 1.01kn / cm ^ 3.
//Test case #4
//Primjer ulaza :
//300 5 1 1 30
//Primjer izlaza :
//Perica moze kupiti : 10 kolaca, a platit ce 17.43kn / cm ^ 3.
//Test case #5
//Cijena mo�e biti decimalni broj!
//Primjer ulaza :
//16 3 2 4 2.3
//Primjer izlaza :
//Perica moze kupiti : 6 kolaca, a platit ce 0.33kn / cm ^ 3.




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	int dzeparac, n, a, h,kolicina;
	float cijena,isplatljivost,V;

	scanf("%d %d %d %d %f", &dzeparac, &n, &a, &h, &cijena);
	if (n < 3 || a < 0) {
		printf("Krivi unos! Molim probajte opet.");
		scanf("%d %d %d %d %f", &dzeparac, &n, &a, &h, &cijena);
	}
	else{
	V = (h * n * (a ^ 2) * (cos(3.14 / n)) / (sin(3.14 / n)) / 4);
	
	kolicina = dzeparac / cijena;
	isplatljivost = cijena / V;

	printf("Perica moze kupiti: %d kolaca, a platit ce %fkn/cm^3.", kolicina, isplatljivost);

	}
	return 0;
}