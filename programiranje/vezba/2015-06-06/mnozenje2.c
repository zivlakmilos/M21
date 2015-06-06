#include <stdio.h>

int proizvod(int n, int niz[])
{
    int rez = 1;
    int i;
    for(i = 0; i < n; i++)
        rez *= niz[i];

    return rez;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int i;
    int niz[n];

    for(i = 0; i < n; i++)
        scanf("%d", &niz[i]);

    printf("%d\n", proizvod(n, niz));

    return 0;
}
