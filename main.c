#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTALE_AUTO (4)
#define NOME (30)
#include "procedure.h"

/*PROGETTO_ASSEGNATO:

Contiene la cartella di un progetto Code::Blocks che,
preso in ingresso il modello di vettura, e il n. di mesi (max 24),
restituisca la rata mensile maggiorando l'importo del 10%.
I modelli:  Ford Fiesta, 12000Euro;
            Ford CMax, 16000Euro;
            Ford Puma, 20000Euro;
            Ford Kuga, 30000Euro
Fare un progetto multifile (main.c, procedure.c, procedure.h)*/

int main()
{

    //DICHIARAZIONI
    int mesi;
    char nome[NOME];
    char siono;

    float rataMensile;


    //INIZIALIZZAZIONI
    siono = 0;
    rataMensile = -1;

    macchina modello [TOTALE_AUTO];

    modello[0].prezzo = 12000;
    modello[1].prezzo = 16000;
    modello[2].prezzo = 20000;
    modello[3].prezzo = 30000;

    strcpy(modello[0].nome, "Ford Fiesta");
    strcpy(modello[1].nome, "Ford CMax");
    strcpy(modello[2].nome, "Ford Puma");
    strcpy(modello[3].nome, "Ford Kuga");




    do
    {
        //INPUT

        printf("\nEsercizio : \n\nPreso in ingresso il modello di vettura, e il n. di mesi (max 24),\nrestituisci la rata mensile maggiorando l'importo del 10 per cento.\n\nI modelli:  \n\nFord Fiesta, 12000 Euro \nFord CMax, 16000 Euro \nFord Puma, 20000 Euro \nFord Kuga, 30000 Euro\n\n\n");

        InputModelloMese(nome,&mesi);


        //CALCOLI
        rataMensile = CalcolaRata(nome,mesi,modello);


        //OUTPUT
        printf("La rata mensile e' di %.2f Euro", rataMensile);

        printf("\nAncora? (S/N)");
        scanf("%c", &siono);
        fflush(stdin);
    }

    while (siono == 'S' || siono == 's');

    return 0;
}
