#include <stdio.h>

int main(){
    float valor, valorstack, saida;
    int qtd, cont =1, peso, pesostack;

    printf("\nEntre com a quantidade de valores ->");
    scanf("%d", &qtd);

    while (cont <= qtd)
    {
        printf("\nEntre com um valor");
        scanf("%f", &valor);
        printf("\nEntre com um peso para esse valor");
        scanf("%d", &peso);
        valorstack =(valor*peso)+valorstack;
        pesostack = pesostack + peso;
        

        cont++;
    }
    saida = valorstack/pesostack;
    printf("\nA media ponderada é: %f\n", saida);

    return 0
}