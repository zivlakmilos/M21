/*
 *
 * Naziv: [niz]Unos_pr1
 * Autor: Milos Zivlak
 *
 * Fajl: main.c
 *
 * Opis:
 * Program koji demonstrira ucitavanje i ispisivanje podataka
 *  u niz / iz niza.
 */

#include <stdio.h>

int main(void)
{
    // Unos broja elemenata niza
    int n;
    printf("Unesi broj elemenata niza: ");
    scanf("%d", &n);

    // Promenjive
    int number[n];  // Niz
    int i;          // Brojacka promenjiva

    // Unos podataka u niz
    for(i = 0; i < n; i++)
    {
        printf("Unesi %d. element niza: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\n\n"); // Napravi 2 prazna reda (da izgleda urednije)

    // Ispis podataka (u obrnutom redosledu)
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d. element niza je %d \n", n - i, number[i]);
    }

    return 0;
}
