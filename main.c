#include <stdio.h>
#include <stdlib.h>
#include "getword.h"
#include "menu.h"
#include "global.h"
char *cat;
int a;

int main()
{
    int cont;
    printf("Hello World!\n");
	cat=(char*) malloc(11);
    switch1();
    switch2();
    getword();
    printf("Jeszcze raz - 1 Wyjscie - 0\n");
    scanf("%d", &cont);
    if(cont == 1)
    {
        int main();
    }
    return 0;
}

