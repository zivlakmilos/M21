#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m;
    int i;
    unsigned long int p = 0, np = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    for(i = n ; i < m; i++)
        if(i % 2 == 0)
            p += i * i;
        else
            np += i * i * i;

    printf("%d\n", p);
    printf("%d\n", np);

    return 0;
}
