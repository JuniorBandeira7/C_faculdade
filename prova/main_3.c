#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    const int coluna=3;
    char aluno[20][10];
    int i, res[20];
    char j,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,a;
    char gabarito[10];

    for(i=0;i<20;i++){
        for(j=0;j<10;j++){
            printf("resposta do %d aluno: ", i+1);
            scanf("%c", &aluno[i][j]);
            fflush(stdin);
        }
    }

    for(j=0;j<10;j++){
        printf("Gabarito [%d]: ",j);
        scanf("%c", &gabarito[j]);
        fflush(stdin);
    }
    for(i=0;i<20;i++){
        res[i]=0;
        for(j=0;j<10;j++){
            if(aluno[i][j]==gabarito[j]){
                res[i]++;
            }
        }
    }

for(i=0;i<20;i++){
    for(j=0;j<10;j++){
        if(aluno[0][j]==gabarito[j]){
            s1++;
            res[0]=s1;
        }
        if(aluno[1][j]==gabarito[j]){
            s2++;
            res[1]=s2;
        }
        if(aluno[2][j]==gabarito[j]){
            s3++;
            res[2]=s3;
        }
        if(aluno[3][j]==gabarito[j]){
            s4++;
            res[3]=s4;
        }
        if(aluno[4][j]==gabarito[j]){
            s5++;
            res[4]=s5;
        }
        if(aluno[5][j]==gabarito[j]){
            s6++;
            res[5]=s6;
        }
        if(aluno[6][j]==gabarito[j]){
            s7++;
            res[6]=s7;
        }
        if(aluno[7][j]==gabarito[j]){
            s8++;
            res[7]=s8;
        }
        if(aluno[8][j]==gabarito[j]){
            s9++;
            res[8]=s9;
        }
        if(aluno[9][j]==gabarito[j]){
            s10++;
            res[9]=s10;
        }
        if(aluno[10][j]==gabarito[j]){
            s11++;
            res[10]=s11;
        }
        if(aluno[11][j]==gabarito[j]){
            s12++;
            res[11]=s12;
        }
        if(aluno[12][j]==gabarito[j]){
            s13++;
            res[12]=s13;
        }
        if(aluno[13][j]==gabarito[j]){
            s14++;
            res[13]=s14;
        }
        if(aluno[14][j]==gabarito[j]){
            s15++;
            res[14]=s15;
        }
        if(aluno[15][j]==gabarito[j]){
            s16++;
            res[15]=s16;
        }
        if(aluno[16][j]==gabarito[j]){
            s17++;
            res[16]=s17;
        }
        if(aluno[17][j]==gabarito[j]){
            s18++;
            res[17]=s18;
        }
        if(aluno[18][j]==gabarito[j]){
            s19++;
            res[18]=s19;
        }
        if(aluno[19][j]==gabarito[j]){
            s20++;
            res[19]=s20;
        }
    }
}
    for(i=0;i<20;i++){
        printf("%d ,", res[i]);//Não entendo por que está dando valor negativo. Não tive tempo de resolver e fazer a média.
    }
return 0;
}