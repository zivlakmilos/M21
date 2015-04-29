/*
 *
 * Naziv: [niz]Sortiranje
 * Autor: Milos Zivlak
 *
 * Fajl: main.c
 *
 * Opis:
 * Program koji demonstrira sortiranje nizova.
 * Float je uzet kao primer, na ovaj nacin moguce je
 * sortirati i bilo koji drugi tip (int, char ...).
 * Koriscen je algoritam buuble, vise o njemu:
 *  http://en.wikipedia.org/wiki/Bubble_sort
 */

#include <stdio.h>

#define NUM_OF_ELEMENTS         5

int main()
{
    // Promenjve
    int i, j;                           // Brojacke promenjive
    float numbers[NUM_OF_ELEMENTS];     // Niz za sortiranje
    float tmp;                          // Pomocna promenjiva (za sortiranje)
    int swapped = 1;                    // Logicka vrednost (0 ili 1)

    // Ucitavanje niza
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        printf("Unesi %d. element niza: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Sortiranje niza
    j = 0;
    while(swapped)      // Isto sto i swapped == 1, samo lepse
    {
        swapped = 0;
        j++;
        for(i = 0; i < NUM_OF_ELEMENTS - j; i++)
        {
            if(numbers[i] > numbers[i + 1])
            {
                tmp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = tmp;
                swapped = 1;
            }
        }
    }

    // Ispis niza
    printf("\nSortirani niz:\n");
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
        printf("%f\n", numbers[i]);

    return 0;
}
