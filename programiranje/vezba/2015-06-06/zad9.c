#include <stdio.h>

int main(void)
{
    unsigned int n = 0, n1 = 0;
    int min;

    scanf("%d", &n);
    min = n;

    do
    {
        n1 = n;
        scanf("%d", &n);
        if(n < min)
            min = n;
    } while(n != n1);

    printf("%d\n", min);

    return 0;
}
