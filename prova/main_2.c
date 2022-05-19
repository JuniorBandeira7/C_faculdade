#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int vetor[8];
    int dec = 0;
    for(int i = 7;i>=0;i--){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0;i<8;i++){
        dec += vetor[i]*pow(2,i);
    }
    printf("\n%d\n\n", dec);
    return 0;
}