#include <stdio.h>

int main(void)
{
    int i;
    int niz[10];
    int p = 0, n = 0, rez;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &niz[i]);
        if(niz[i] % 2 == 0)
            p += niz[i];
        else
            n += niz[i];
    }

    rez = p - n;
    printf("%d\n", rez);

    return 0;
}
