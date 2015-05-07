#include <stdio.h>

#define NUM_OF_ELEMENTS         10

int main(void)
{
    // Promenjive
    int numbers[NUM_OF_ELEMENTS];
    int i, j;                               // Bojacke promenjive
    int different = 0;                      // Boj razlicitih brojeva
    int endNumbers[NUM_OF_ELEMENTS];        // Krajnji podaci
    int numberOfRepeats[NUM_OF_ELEMENTS];   // Broj ponavljanja elemenata
    int copy = 0;                           // Da li je kopija (logicki, 0 ili 1)

    // Unis podataka
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        scanf("%d", &numbers[i]);
        // Inicijalizacija drugih nizova (nije obavezno, ali moze doci do runtime "greske")
        endNumbers[i] = 0;
        numberOfRepeats[i] = 0;
    }

    // Sazimanje
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        for(j = 0; j < NUM_OF_ELEMENTS; j++)
        {
            if(numbers[i] == endNumbers[j])
            {
                copy = 1;
                break;
            }
        }

        if(copy == 1)
        {
            numberOfRepeats[j]++;
            copy = 0;
        } else
        {
            endNumbers[different] = numbers[i];
            numberOfRepeats[different]++;
            different++;
        }
    }

    // Ispis podataka
    printf("\nKonacni niz i broj ponavljanja:\n");
    for(i = 0; i < different; i++)
        printf("%d\t%d\n", endNumbers[i], numberOfRepeats[i]);

    return 0;
}
