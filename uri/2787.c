#include <stdio.h>
 
 
int main() {
 
    int l, c, quadrado;
    scanf("%d", &l);
    scanf("%d", &c);
    if(l <= 1000 && l >= 1 && c <= 1000 && c >= 1 ){
        if(l % 2 != 0 && c % 2 != 0)
        {
            quadrado = 1;
        }
        if(l % 2 == 0 && c % 2 != 0){
            quadrado = 0;
        }
        if(l % 2 != 0 && c % 2 == 0){
            quadrado = 0;
        }
        if(l % 2 == 0 && c % 2 == 0){
            quadrado = 1;
        }
        printf("%d\n", quadrado);

    }
 
    return 0;
}