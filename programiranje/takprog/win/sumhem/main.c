#include <stdio.h>

int hem(unsigned int a, unsigned int b);

//============================== main ===============================//
int main()
{
    return 0;
}
//=========================== end of main ===========================//

int hem(unsigned int a, unsigned int b)
{
    /*
    int c;
    int count;
    c = a ^ b;
    for(i = 0; i < )
    */
    int i;
    int c;
    for(i = 0; i < sizeof(int); i++)
    {
        if(!(a & (1 << i)))
            c++;
    }
}
