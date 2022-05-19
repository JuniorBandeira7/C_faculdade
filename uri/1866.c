#include <stdio.h>

int main(){
    int c, contador=0,contador1=0,contador2=0;

    scanf("%d", &c);
    
    int agregador[c];
    int s[c];

    while(contador1 != c){
        scanf("%d", &s[contador1]);
        contador1 = contador1 + 1;
    }
   
    while (contador != c){
        if(s[contador] % 2 == 0){
            agregador[contador] = 0;
        }else{
            agregador[contador] = 1;
        }
        contador++;
    }
    while(contador2 != c){
        printf("%d\n", agregador[contador2]);
        contador2++;
    }
    return 0;
}