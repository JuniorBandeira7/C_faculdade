#include <stdio.h>
 
int main() {
 
    int a, b, c, d, saida;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    saida = a+b+c+d-3;
    printf("%d", saida);
 
    return 0;
}