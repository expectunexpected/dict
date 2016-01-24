#include <stdio.h>
#include "global.h"

void switch1(int a)
{
    printf("Angielski - Polski # 1\nPolski - Angielski # 2\n");
    scanf("%d",&a);
    switch( a ){
        case 0:
        {
            system("clear");
            printf("Wybrales Angielski - Polski\n");
            break;
        }
        case 1:
        {
            system("clear");
            printf("Wybrales Polski - Angielski\n");
            break;
        }
        default:
        {
            printf("Brak komendy\n");
            break;
        }
    }
}
void switch2(void) {
    int b;
    printf("kategoria 1 - czasowniki\nkategoria 2 - rzeczowniki\nkategoria 3 - przymiotniki\n");
    scanf("%d\n", &b);
    switch( b ) {
        case 1:
        {
            cat[10]="\verb.txt";
            break;
        }
        case 2:
        {
            cat[10]="\noun.txt";
            break;
        }
        case 3:
        {
            cat[10]="\adj.txt";
            break;
        }
        default:
        {
        printf("Brak komendy");
        break;
        }
    }
 return 0;
}
