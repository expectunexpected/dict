#include <stdio.h>
#include "getword.h"
#include "menu.h"
#include "global.h"
char cat[10];
int a;

int main()
{
    int cont;
    printf("Hello World!\n");
    switch1();
    switch2();
    getword();
    printf("Jeszcze raz - 1\Wyjscie - 0\n");
    scanf("%d\n", &cont);
    if(cont == 1)
    {
        int main();
    }
    return 0;
}

