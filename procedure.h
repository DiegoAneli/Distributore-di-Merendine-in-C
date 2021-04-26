#ifndef PROCEDURE_H_INCLUDED
#define PROCEDURE_H_INCLUDED

#define TOTALE_AUTO (4)
#define NOME (30)


//STRUTTURA AUTOMOBILE
typedef struct
{
    float prezzo;
    char nome[30];

}macchina;

//PROTOTIPAZIONE
void InputModelloMese(char* name,int* m);
float CalcolaRata(char nome[],int mesi,macchina vetture[]);

#endif // PROCEDURE_H_INCLUDED
