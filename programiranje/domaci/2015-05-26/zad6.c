#include <stdio.h>

int main(void)
{
    int n = 21;
    while(n > 20)
        scanf("%d", &n);

    int i, j;
    int niz[n];
    int tmp;

    for(i = 0; i < n; i++)
        scanf("%d", &niz[i]);

    for(i = 0; i < n; i++)
        for(j = i; j < n; j++)
            if(niz[i] < niz[j])
            {
                tmp = niz[i];
                niz[i] = niz[j];
                niz[j] = tmp;
            }

    printf("\n\nSortirani niz:\n");

    for(i = 0; i < n; i++)
        printf("%d\n", niz[i]);

    return 0;
}
