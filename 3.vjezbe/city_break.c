/*
Odlazite na city-break u grad Nully, u Francuskoj, i s obzirom da �elite obi�i sve znamenitosti u jednom danu, imate vrlo ograni�en prostor u ruksaku.
Samim time, morate se odlu�iti �to �elite ponijeti sa sobom. Stvarima koje �elite ponijeti ste izmjerili te�inu, i ocijenili koliko vam vrijede.
Primjerice,
- krema za sun�anje je te�ka 1kg, ali vrijedi 50 jedinica
- �tit od Captain America je te�ak 4kg (plasti�ni) a vrijedi vam 75 jedinica
- sendvi� od bu�ole je te�ak 2kg, i vrijedi 60 jedinica
- luft madrac je te�ak 1kg, ali vrijedi 10 jedinica

Po�to mo�ete ponijeti samo 5kg, najoptimalnije je izabrati kremu za sun�anje i �tit Captain America koji vrijede zajedno 125 jedinica. Druga opcija je da ponesete kremu, sendvi� i lufti�, i to vrijedi 120 jedinica. �to je zaklju�ak? Ne�ete izgoriti i lijepo �ete izgledati na slikama sa �titom, ali �ete biti gladni.

S ulaza je potrebno u�itati dva broja K i N. K ozna�ava koliko mo�ete kilograma ponijeti u ruksaku, a N ozna�ava broj dostupnih stvari od kojih morate izabrati
Nakon toga slijedi N redaka, a u svakom retku se nalazi broj T i V, gdje je T te�ina pojedine stvari a V je njena vrijednost.
Na kraju je potrebno ispisati jedan broj: koja je najve�a vrijednost koju je mogu�e ponijeti.

Vrijedi: 1 <= K <= 1000, 1 <= N <= 1000, 0 <= T <= 1000, 0 <= V <= 1000.


Test case #1
Primjer iz teksta - mozemo ponijeti 5kg, imamo 4 stvari na izbor. Najbolje rjesenje se postize sa 125 jedinica vrijednosti.
Primjer ulaza:
5 4
1 50
4 75
2 60
1 10
Primjer izlaza:
125
Test case #2
Stane samo jedna stvar
Primjer ulaza:
5 5
3 20
4 30
5 40
3 50
4 10
Primjer izlaza:
50

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int K, N;
	int T[1000], V[1000];
	int Bodovi = 0;
	int Kilaza = 0;

	scanf("%d %d", &K, &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &T[i], &V[i]);
	}

	for (int i = 0; i < N; i++) {
		if (Kilaza != K) {
			if (V[i] > Bodovi) {
				Bodovi += V[i];
				Kilaza += T[i];
			}
		}
	}

	printf("%d", Bodovi);


	return 0;
}