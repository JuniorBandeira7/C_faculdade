#include <stdio.h>
#include <string.h>
void main(void)
{
    char s[7] = "123456";//vetor precisa ter uma casa maior q o que ela recebe por conta o '\0' no final como padrão
    char r[4] = "NAO";
    char e[10];
    int t = 0;

    while((strcmp(s,e) != 0) && (t <= 2)){
        gets(e);
        t++;
        puts(r);
    }

    if (strcmp(s,e) == 0)
    {
        strcpy(r, "SIM");
        puts(r);
    }



}
