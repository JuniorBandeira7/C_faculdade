#include <stdio.h>
#include <math.h>
//com o main retornando void, não precisa colocar return 0 no final
void main(void)
{
    float p = 1;
    int t, v, c = 0;
    scanf("%d", &t);
    do
    {
        scanf("%d", &v);
        p *= v;
        c++;
    }while (t > c);
    p = pow(p, 1.0/c);
    printf("%f", p);
    }