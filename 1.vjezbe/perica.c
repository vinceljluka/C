//Srednjo�kolke Klara i Petra vole se dopisivati preko maaaaaliiih papiri�a za vrijeme nastave, jer su mobiteli zabranjeni.Me�utim, kako ne sjede zajedno u klupi jer Klara sjedi u drugom redu do prozora, a Petra u �etvrtom redu do zida osmislile su posebnu tajnu abecedu za dopisivanje putem papiri�a.Kada napi�u poruku uvijek ju �alju preko nekoliko ljudi u razredu, pa tako i preko Perice.
//
//Pericu jako zanima oko �ega se Petra i Klara dopisuju te je na temelju par poruka uspio de�ifrirati tajnu abecedu, ali bi volio da mu vi pomognete napisati program koji �e brzinski prevesti poruku kad mu dospije u ruke kako Klara i Petra ne bi sku�ile da ju Perica �ita.
//
//
//
//Perica je primijetio da :
//
//Jedna poruka se uvijek sastoji od 10 brojeva
//Svaki broj u poruci je zapravo slovo engleske abecede : 1 je A, 2 je B� Z je 26
//Ukoliko je 10. broj 0, onda to zapravo zna�i da na kraju poruke pi�e �KRAJ PORUKE!
//Ukoliko na kraju poruke ne pi�e broj 0 onda zna�i da slijedi papiri� s ostatkom teksta koji je vezan uz prethodnu poruku

//Test case #1
//I tako Perica sjedi na satu s va�im programom u kojeg nabrzinu mo�e utipkati 10 brojeva i �ita poruke koje Klara i Petra izmjenjuju�
//Prvo je uhvatio papiri� koji Petra �alje Klari.
//Primjer ulaza :
//19 22 9 4 10 1 13 9 19 5
//Primjer izlaza :
//S V I D J A M I S E
//Test case #2
//Zatim je Petra opet poslala novi papiri� Klari...
//Primjer ulaza :
//15 14 1 12 9 2 1 19 10 1
//Primjer izlaza :
//O N A L I B A S J A
//Test case #3
//...i jo� jedan...
//Primjer ulaza :
//11 15 10 1 11 15 10 1 11 15
//Primjer izlaza :
//K O J A K O J A K O
//Test case #4
//...i jo� jedan...
//Primjer ulaza :
//10 1 11 15 15 15 15 15 15 0
//Primjer izlaza :
//J A K O O O O O O
//KRAJ PORUKE!
//Test case #5
//Nakon toga je Klara odgovorila Petri.
//Primjer ulaza :
//20 11 15 15 15 15 15 15 15 0
//Primjer izlaza :
//T K O O O O O O O
//KRAJ PORUKE!
//Test case #6
//I Petra ponovo odgovorila Klari.
//A Perica je ostao u �oku...
//Primjer ulaza :
//16 5 18 9 3 1 1 1 1 0
//Primjer izlaza :
//P E R I C A A A A
//KRAJ PORUKE!



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	//A = 1 + 64;

	int poruka[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &poruka[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (i == 9 && poruka[i] == 0) {
			printf("\nKRAJ PORUKE!");
			return 0;
		}
		printf("%c ", poruka[i] + 64);
	}

	return 0;
}