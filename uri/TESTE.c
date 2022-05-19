#include <stdio.h>
 
int main() {
    int n, k, p,i,comp[n-1],aprov=0, ii,acumula, saida=0;

    scanf("%d", &n);
    scanf("%d", &k);

    for(i=0;i<n;i++){
        scanf("%d", &comp[i]);
    }
    
        for(ii=0;ii<n;ii++){
            if(comp[ii]>comp[ii-1]){
                acumula = comp[ii];  
            }
        }
    
    printf("%d", acumula);
  
 
    return 0;
}