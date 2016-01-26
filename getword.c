#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "global.h"

int getword()
{
int rand2,lines=0,i,j;
char word[60],answ[60],gword[60],c,**usedw,**usedw2;
int p=0,pointsm=0,usedwb,z;
srand(time(NULL));

printf("%s\n",cat);
FILE *fp;
fp=fopen(cat, "r");
if (fp == NULL) {
    printf("Brak pliku slownika lub zawartosci.\n");
    return 0;
}
do
{
    c = fgetc(fp);
    if(c == '\n')
    {
    lines++;
    }
} while (c != EOF);
if(c != '\n' && lines != 0)
{
    lines++;
}
rewind(fp);
printf("%d\n", lines);
printf("Ile chcesz slowek?\n");
scanf("%d",&z);

usedw=(char **) calloc(z, sizeof(char *));
usedw2=(char **) calloc(z, sizeof(char *));
for(i=0;i<z;i++)
	{
    usedw[i]=(char *) calloc(60, sizeof(char));
    }
for(i=0;i<z;i++)
    {
        usedw2[i]=(char *) calloc(60, sizeof(char));
    }
for(i=0;i<z;i++)
{
    usedwb=1;
    rand2=rand()%lines+1;
    if(rand2%2==0)
    {
        if(a==1)
        {
            fgets(word, 60, fp);
        }
        else
        {
          rand2--;
        }
    }
    for(j=0;j<rand2;j++)
    {
        fgets(word, 60, fp);
    }
    strtok(word, "\n");
    for(j=0;j<p;j++)
    {
        if(usedw[j] == word)
        {
            i++;
            usedwb=0;
        }
    }
    if(usedwb=1)
    {
        printf("\n%s - ", word);
        scanf("%s",answ);
        strcpy(gword, word);
        fgets(word, 60, fp);
        strtok(word, "\n");
        if(strcmp( word, answ) == 0)
        {
            printf("Dobra odpowiedz!\n");
            p++;
            strcpy(usedw[p], answ);
        }
        else
        {
        printf("Sproboj ponownie :C\n");
        pointsm++;
        strcpy(usedw2[pointsm],word);
        printf("\n%s-",gword);
        printf("%s\n", word);
        }

    }
    rewind(fp);
}
for ( i = 0; i < z; i++ )
{
    free(usedw[i]);
}
free(usedw);
printf("Slowa, ktorych nie umiales:\n");
FILE *wrong;
wrong = fopen("wrong.txt","w");
for(i=0;i<pointsm;i++)
{
    fprintf(wrong,"%s\n",usedw2[i]);
    printf("%s\n",usedw2[i]);
}
fclose(wrong);
for ( i = 0; i < z; i++ )
{
    free(usedw2[i]);
}
free(usedw2);
system("clear");
printf("Zle odpowiedzi - %d\nDobre odpowiedzi - %d\n",pointsm,p);
}
