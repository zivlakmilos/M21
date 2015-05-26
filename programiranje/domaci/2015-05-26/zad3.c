#include <stdio.h>

int main(void)
{
    int n = 21;
    while(n > 20)
        scanf("%d", &n);

    int i;
    int neg = 0;
    int niz[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &niz[i]);
        if(niz[i] < 0)
            neg++;
    }

    printf("\n\nBroj negativnih brojeva u nizu je: %d\n", neg);

    return 0;
}
