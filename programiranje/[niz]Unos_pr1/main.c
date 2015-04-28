#include <stdio.h>

int main(void)
{
    // Unos broja elemenata niza
    int n;
    printf("Unesi broj elemenata niza: ");
    scanf("%d", &n);

    // Promenjive
    int array[n];
    int i;

    // Unos podataka u niz
    for(i = 0; i < n; i++)
    {
        printf("Unesi %d. element niza: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n\n");

    // Ispis podataka (u obrnutom redosledu)
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d. element niza je %d \n", i, array[i]);
    }

    return 0;
}
