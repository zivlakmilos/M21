#include <stdio.h>

int main(void)
{
    int n = 16;
    while(n > 15)
        scanf("%d", &n);

    int zbir = 0, niz[n];
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
        zbir += niz[i];
    }

    printf("\n\nZbir niza je: %d\n", zbir);

    return 0;
}
