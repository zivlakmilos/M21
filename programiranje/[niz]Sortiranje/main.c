/*
 *
 * Naziv: [niz]Unos_pr1
 * Autor: Milos Zivlak
 *
 * Fajl: main.c
 *
 * Opis:
 * Program koji demonstrira sortiranje nizova.
 */

#include <stdio.h>

#define NUM_OF_ELEMENTS     5

int main(void)
{
    // Promenjive
    int i, j;                       // Brojacke promenjive
    int number[NUM_OF_ELEMENTS];    // Niz za sortiranje
    int tmp;                        // Pomocna promenjiva (za sortiranje)

    // Ucitavanje niza
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Unesi %d. element niza: ", i + 1);
        scanf("%d", &number[i]);
    }

    // Sortiranje niza
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
        for(j = i + 1; j < NUM_OF_ELEMENTS; j++)
        {
            if(number[i] > number[j])
            {
                tmp = number[j];
                number[j] = number[i];
                number[i] = tmp;
            }
        }

    // Ispis niza
    printf("\nSortirani niz:\n");
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}
