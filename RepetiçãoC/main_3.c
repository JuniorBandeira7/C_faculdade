#include <stdio.h>
#include <stdlib.h>
#define TAMDEZ 10
#define TAMVINTE 20

int main()
{
    char matriz[TAMVINTE][TAMDEZ];
    char gabarito[TAMDEZ];
    int notas[TAMVINTE];
    int SomaDasNotas = 0;

    //Pegando as questões dos 20 alunos.
    for(int i=0; i<TAMVINTE; i++){
        for(int j=0; j<TAMDEZ; j++){
            scanf("%c ", &matriz[i][j]);
        }
    }

    //Pegando o gabarito
    for(int i=0; i<TAMDEZ; i++){
        scanf("%c ", &gabarito[i]);
    }

    //Comparando gabarito com as respostas
    for(int i=0; i<TAMVINTE; i++){
        int nota = 0;
        for(int j=0; j<TAMDEZ; j++){
            if(matriz[i][j] == gabarito[j]){
                nota+=1;
            }
        }
        SomaDasNotas += nota;
        notas[i] = nota;
    }

    //Mostrando notas
    for(int i=0; i<TAMVINTE; i++){
        printf("O Aluno %d tirou: %d\n",i+1,notas[i]);
    }

    //Media da turma
    float Media_Turma = (float)SomaDasNotas / TAMVINTE;
    printf("A Media da turma %.2f\n", Media_Turma);


    return 0;
}