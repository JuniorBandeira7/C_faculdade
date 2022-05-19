#include <stdio.h>

int main(){
    int valor, qtd, cont =1, soma =0, prod =1;

    printf("\nEntre com a quantidade de valores ->");
    scanf("%d", &qtd);

    while (cont <= qtd)
    {
        printf("\nEntre com um valor->");
        scanf("%d", &valor);
        soma += valor;
        prod *= valor;

        cont++;
    }

    printf("\nA soma e -> %d\n", soma);
    printf("\nO produto e -> %d", prod);
    
}
