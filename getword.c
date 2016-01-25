#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "global.h"

int getword()
{
int rand2,x=0,lines,i,j;
char word[60],answ[60],c,**usedw;
int p=0,pointsm=0,usedwb,z;
printf("%s\n",cat);
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
printf("Ile chcesz slowek?\n");
scanf("%d",&z);

usedw=(char **) malloc(z*sizeof(char *));

for(i=0;i<z;i++)
	{
    usedw[i]=(char *) malloc(60*sizeof(char));
	}
for(i=0;i<z;i++)
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
        printf("%s -- ", word);
        scanf("%s",answ);
        fgets(word, 60, fp);
        printf("\n%s\n",word);
        if(word==answ)
        {
            printf("Dobra odpowiedz!\n");
            p++;
            usedw[p]=answ;
        }
        else
        {
        printf("Sproboj ponownie :C\n");
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
    fprintf(wrong,"%s\n",usedw[i]);
    printf("%s\n",usedw[i]);
}
fclose(wrong);
system("clear");
printf("Zle odpowiedzi - %d\nDobre odpowiedzi - %d",pointsm,p);
}
