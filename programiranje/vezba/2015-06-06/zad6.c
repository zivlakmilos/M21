#include <stdio.h>
#include <math.h>

#define STRANICA        10

int main(void)
{
    char opcija;
    int povrsina = 0;

    scanf("%c", &opcija);

    switch(opcija)
    {
        case 'H':
            povrsina = 6 * pow(STRANICA, 2);
            break;
        case 'K':
            povrsina = pow(STRANICA, 2);
            break;
        case 'T':
            povrsina = pow(STRANICA, 2) / 2;
            break;
    }

    printf("Povrsina je: %d\n", povrsina);
}
