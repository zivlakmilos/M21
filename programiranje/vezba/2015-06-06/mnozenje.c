#include <stdio.h>

int proizvod(int n)
{
    int niz[n];
    int rez = 1;
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
        rez *= niz[i];
    }

    return rez;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d\n", proizvod(n));

    return 0;
}
