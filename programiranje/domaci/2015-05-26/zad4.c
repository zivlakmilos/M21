#include <stdio.h>

int main(void)
{
    int n = 21;
    while(n > 20)
        scanf("%d", &n);

    int i;
    int niz[n];
    int broj = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
        if(niz[i] > 10 && niz[i] < 20)
            broj++;
    }

    printf("\n\nBroj brojeva izmedju 10 i 20 je: %d\n", broj);

    return 0;
}
