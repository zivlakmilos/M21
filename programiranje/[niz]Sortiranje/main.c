/*
 *
 * Naziv: [niz]Sortiranje
 * Autor: Milos Zivlak
 *
 * Fajl: main.c
 *
 * Opis:
 * Program koji demonstrira sortiranje nizova.
 * Int je uzet kao primer, na ovaj nacin moguce je
 * sortirati i bilo koji drugi tip (float, double, char ...).
 */

#include <stdio.h>

#define NUM_OF_ELEMENTS     5

int main(void)
{
    // Promenjive
    int i, j;                       // Brojacke promenjive
    int numbers[NUM_OF_ELEMENTS];    // Niz za sortiranje
    int tmp;                        // Pomocna promenjiva (za sortiranje)

    // Ucitavanje niza
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Unesi %d. element niza: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sortiranje niza
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
        for(j = i + 1; j < NUM_OF_ELEMENTS; j++)
        {
            if(numbers[i] > numbers[j])
            {
                tmp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = tmp;
            }
        }

    // Ispis niza
    printf("\nSortirani niz:\n");
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
