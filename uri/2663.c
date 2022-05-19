#include <stdio.h>
 
int main() {
    int n, k, p,i,aprov=0, ii,acumula, saida=0;

    scanf("%d", &n);
    scanf("%d", &k);

    int comp[n-1];

    for(i=0;i<n;i++){
        scanf("%d", &comp[i]);
    }
    for(i=0;i<n;i++){
        if(comp[i]>comp[i-1]){
               acumula = comp[i];  
            }        
        }
    while(saida<k){
        for(i=0;i<n;i++){
            if(acumula==comp[i]){
                saida++;
            }
        }
        acumula--;
    }
    printf("%d\n", saida);
    return 0;
}