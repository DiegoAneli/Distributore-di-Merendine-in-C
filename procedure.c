#include <stdio.h>
#include <string.h>
#include "procedure.h"
#define TOTALE_AUTO (4)
#define NOME (30)

//FUNZIONE INPUT
void InputModelloMese(char* name, int* m)
{
    printf("Inserisci il modello dell'automobile scelta: ");
    gets(name);
    fflush(stdin);

    do
    {
        printf("Inserisci ora il numero di mesi : ");
        scanf("%d", m);
        fflush(stdin);

    }

    while(*m<0 || *m>24);

}

//FUNZIONE CALCOLI
float CalcolaRata(char nome[], int mesi, macchina vetture[])
{
    int i;
    float risultato;
    risultato = -1.0;

    for(i=0; i<TOTALE_AUTO; i++)
    {
        if(strcmp(nome,vetture[i].nome)==0)
        {
            risultato = (((vetture[i].prezzo * (float) 10/100)) + vetture[i].prezzo)/mesi;
        }
    }

    if (risultato<0)
    {
        printf("Autmobile non trovata");
    }

    return risultato;
}






