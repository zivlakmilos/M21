#include <stdio.h>

int main(void)
{
    int n = 21;
    while(n > 20)
        scanf("%d", &n);

    float niz[n];
    float zbir = 0, rez;
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%f", &niz[i]);
        zbir += niz[i];
    }

    rez = zbir / n;

    printf("\n\nAritmeticka sredina niza je: %f\n", rez);

    return 0;
}
