#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "global.h"

void getword(void)
{
int rand2,x=0,lines,i,j;
char word[60],answ[60],c;
int points=0,pointsm=0,amount,usedwb;
printf("%s",cat);
FILE *fp;
fp=fopen(cat, "r");
if (fp == NULL) {
    printf("Brak pliku slownika lub zawartosci.\n");
    return 0;
}
rewind(fp);
while((c=getc(fp)) !=EOF)
    {
        if(c=='\n')
        lines++;
    }
rewind(fp);
scanf("%s\n",&amount);
char usedw[60][amount];
for(i=0;i<amount;i++)
{
    usedwb=1;
    do
    {
        fgets(word, 60, fp);
        srand(time(NULL));
        rand2=rand()%+1;
        x++;
    }
    while(rand2 != 1 & x<lines);
    if(x%2==0 & a==1)
    {
        fgets(word, 60, fp);
    }
    for(j=0;j<points;j++)
    {
        if(usedw[60][j] == word)
        {
            i++;
            usedwb=0;
        }
    }
    if(usedwb=1)
    {
        printf("%s --", word);
        scanf("%s\n",&answ);
        if(word==answ)
        {
            printf("Dobra odpowiedz!");
            points++;
            usedw[60][points]=answ;
        }
        else
        {
        printf("Sproboj ponownie :C");
        pointsm++;
        }
    }
    rewind(fp);
}
printf("Slowa, ktorych nie umiales:\n");
FILE *wrong;
wrong = fopen("wrong.txt","w");
for(i=0;i<pointsm;i++)
{
    fprintf(wrong,"%s\n",usedw[60][i]);
    printf("%s\n",usedw[60][i]);
}
fclose(wrong);
system("clear");
printf("Złe odpowiedzi - %d\nDobre odpowiedzi - %d",pointsm,points);
}
