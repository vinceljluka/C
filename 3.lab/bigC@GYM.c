/*
Jedan od na�ih najdra�ih protagonista Big-C jednog je dana odlu�io oti�i u teretanu (engl. GYM, �ita se Gajm ka�e on) gdje je naletio na zvijezdu u usponu s TVZ-a koja se proslavila u emisiji �Fittest family" popularno zvanog Fit-W. Prilikom dolaska Fit-W je Big-C-u dao nekoliko korisnih savjeta �to se ti�e prehrane i vje�banja. Plan vje�banja i treninga mora precizno voditi kroz aplikaciju koja �e mu na kraju morati re�i koliko je smr�avio/dobio na te�ini. Iz razloga �to Big-C zbog vremenskog ograni�enja ne stigne razviti aplikaciju sam, zamolio nas je da vama damo zadatak kako bi mu pomogli.
Prvo je potrebno unijeti broj dana plana kojeg se Big-C pridr�avao (od 5-100), pa je potrebno brojati minute koliko je jeo taj dan, a potom koliko je vje�bao. Nakon toga koliko kalorija dobije po minuti jedenjem i koliko gubi vje�banjem. Ispisati dnevni broj unesenih kalorija od broja potro�enih kalorija umanjenih za 2000 dnevno koliko Big C tro�i na grijanje organizma i razmi�ljanje o prolaznosti �ivota. 1kg tjelesne mase je 7700 kalorija. Izra�unati koliko je kg dobio ili izgubio na kraju plana.

Test case #1
Big-C se odlu�io za plan od 5 dana. Prvi da n jeo je 10 minuta, drugi 10... do zadnjeg dana kada je jeo 20 minuta. Vje�bao je malo manje: 5, 5, 10, 5 i 5 minuta po danu. Unos om hrane po minuti dobiva 200 kalorija, a v je�banjem gubi 100. Po danu konstantno tro� i 2000 kalorija, pa se dobiva ra�unica kao u izlazu. Na�alost, Big-C je napornom vje�b om dobio skoro pet kila (4.81kg) u 5 dana v je�banja.
Primjer ulaza:
5
10 10 30 180 20
5 5 10 5 5
200
100
Primjer izlaza:
Izvjestaj po danu: -500 -500 3000 33500 1500
Ukupno: 4.81kg

Test case #2
Primjer ulaza:
2
4 (70
12
Primjer izlaza:
Broj dana mora biti veci od 4 i manji od
101

Test case #3 
Primjer ulaza:
-5
55
Primjer izlaza:
Broj minuta ne smije biti manji od 0

Test case #4
Primjer ulaza:
5
1 1 1 1 1
-1
Primjer izlaza:
Vjezbaj p* ti materina!

Test case #5
A mo�e i izgubiti kilograme
Primjer ulaza:
7
20 20 30 40 20 40 10
30 30 60 60 30 60 70
200
100
Primjer izlaza:
Izvjestaj po danu: -1000 -1000 -2000 0
-1000 0 -7000
Ukupno: -1.56kg
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 100

int main()
{
    int dan;
    int niz1[max];
    int niz2[max];
    int kalorija = 0;
    int gubiti = 0;
    int niz3[max] = { 0 };

    int index = 0;

    int zbroj = 0;
    float kilo = 0;
    scanf("%d", &dan);
    if (dan < 5 || dan>100) {
        printf("Broj dana mora biti veci od 4 i manji od 101\n");
        return 1;
    }
    for (int i = 0; i < dan; i++) {
        scanf("%d", &niz1[i]);
        if (niz1[i] <= 0) {
            printf("Broj minuta ne smije biti manji od 0\n");
            return 1;
        }
    }
    for (int i = 0; i < dan; i++) {
        scanf("%d", &niz2[i]);
        if (niz2[i] <= 0) {
            printf("Vjezbaj p* ti materina!\n");
            return 1;
        }
    }
    scanf("%d", &kalorija);
    scanf("%d", &gubiti);
    for (int i = 0; i < dan; i++) {
        niz3[index++] = niz1[i] * kalorija - niz2[i] * gubiti;

    }
    for (int i = 0; i < index; i++) {
        niz3[i] = niz3[i] - 2000;
        zbroj += niz3[i];
    }
    printf("Izvjestaj po danu: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", niz3[i]);

    }

    kilo = (float)zbroj / 7700;
    printf("\nUkupno: %.2fkg", kilo);
    return 0;
}