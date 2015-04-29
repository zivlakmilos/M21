/*
 *
 * Naziv: [niz]Parni
 * Autor: Milos Zivlak
 *
 * Fajl: main.c
 *
 * Opis:
 * Program koji ispisuje sve parne brojeve iz niza.
 * Ovo je zadatak koji je profesor zadao da uradimo kod kuce (da pokusamo)
 */

#include <stdio.h>

#define NUM_OF_ELEMENTS         10

int main()
{
    // Promenjive
    int i;                          // Brojacka promenjiva
    int numbers[NUM_OF_ELEMENTS];   // Niz iz koda se izdvajaju parni brojevi

    // Unos
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
        scanf("%d", &numbers[i]);

    // Ispis
    printf("\n");
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
        if(numbers[i] % 2 == 0)
            printf("%d\n", numbers[i]);

    return 0;
}
