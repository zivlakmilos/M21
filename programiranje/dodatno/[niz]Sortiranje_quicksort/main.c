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
 * Koriscen je algoritam "bubble", vise o njemu:
 *  http://en.wikipedia.org/wiki/Quicksort
 */

#include <stdio.h>

#define NUMBER_OF_ELEMENTS          10

/*
 *
 * Vunkcija koja sortira niz. (Ovo je dekleracija, definicija je posle main-a)
 */
void quickSort(float arr[], int left, int right);

//============================= main ===============================//
int main(void)
{
    // Promenjive
    float numbers[NUMBER_OF_ELEMENTS];     // Niz za sortiranje
    int i;                                 // Brojacka promenjiva

    // Ucitavanje niza
    for(i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        printf("%2d. = ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Sortiranje niza
    quickSort(numbers, 0, NUMBER_OF_ELEMENTS - 1);

    // Ispis niza
    printf("\nSortiran niz:\n");
    for(i = 0; i < NUMBER_OF_ELEMENTS; i++)
        printf("%f\n", numbers[i]);

    return 0;
}
//=========================== end of main =========================//

void quickSort(float arr[], int left, int right)
{
    int i = left;
    int j = right;
    float tmp;
    float middle = arr[(left + right) / 2];

    while(i <= j)
    {
        while(arr[i] < middle)
            i++;
        while(arr[j] > middle)
            j--;
        if(i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if(left < j)
        quickSort(arr, left, j);
    if(i < right)
        quickSort(arr, i, right);
}
