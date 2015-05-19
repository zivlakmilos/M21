#include <stdio.h>

#define NUM_OF_ELEMENTS_MAX     15

int main(void)
{
    // Promenjive
    int i, n = 16;                          // Brojacke promenjive i broj elemenata
    int numbers[NUM_OF_ELEMENTS_MAX];       // Niz
    int tmp;                                // Pomocna promenjiva za zamenu

    // Unos
    while(n >= 15)
        scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    // Racun
    for(i = 0; i < n - 1; i += 2)
    {
        tmp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = tmp;
    }

    // Ispis
    for(i = 0; i < n; i++)
        printf("%d", numbers[i]);

    return 0;
}
