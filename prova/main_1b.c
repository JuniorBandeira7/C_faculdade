#include <stdio.h>
#include <string.h>
int main()
{
    char s[7] = "123456";
    char r[4] = "NAO";
    char e[10];
    int t = 0;
    do
    {
        gets(e);
        t++;
        if (strcmp(s,e) != 0)
    {
        puts(r);
    }
    }while((strcmp(s,e) != 0) && (t <= 2));
    if (strcmp(s,e) == 0)
    {
        strcpy(r, "SIM");
        puts(r);
    }
    return 0;
}