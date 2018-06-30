#include <stdio.h>
#include <stdlib.h>

/* ========================== S U B P A L A V R A ========================== */
void subpalavra(char palavra[], char fita[])
{
    int i=0,j=0,tamanho,tamanho2, aux=0, aceita=0;

    for(i=0; palavra[i]!='\0' ; i++)
    {
       tamanho++;
    }

    for(i=0; fita[i]!='\0' ; i++)
    {
       tamanho2++;
    }

    for(i=0 ; i < tamanho ; i++)
    {
        if(fita[0]==palavra[i]){
            aux = i;
            for(j=0 ; j < tamanho2 ; j++){
                if(fita[j]==palavra[aux]){
                    aux++;
                }else{
                    break;
                }
            }

            if(j==tamanho2)
            {
                aceita++;
            }
        }
    }

    if(aceita!=0)
    {
        printf("\nEntrada aceita => [%s] - contem a subpalavra '%s'", palavra, fita);
    }else{
        printf("\nEntrada rejeitada => [%s] - nao contem a subpalavra '%s'", palavra, fita);
    }
}

/* ========================== P R E F I X O ========================== */
void prefixo(char palavra[], char fita[])
{
    int i=0,tamanho=0, aux;

    for(i=0; fita[i]!='\0' ; i++)
    {
       tamanho++;
    }

    if(fita[0]==palavra[0]){
        aux = 0;
        for(i=0 ; i < tamanho ; i++)
        {
            if(fita[i]==palavra[aux])
            {
                aux++;
            }else{
                printf("\nEntrada rejeitada => [%s] - nao contem o prefixo '%s'", palavra, fita);
                exit(0);
            }
        }
    }else{
        printf("\nEntrada rejeitada => [%s] - nao contem o prefixo '%s'", palavra, fita);
    }

    if(aux==tamanho){
        printf("\nEntrada aceita => [%s] - contem o prefixo '%s'", palavra, fita);
    }
}

/* ========================== S U F I X O ========================== */
void sufixo(char palavra[], char fita[])
{
    int tamanho=0, tamanho2=0, inicio=0,i,aux=0;

    for(i=0; palavra[i]!='\0' ; i++)
    {
       tamanho++;
    }

    for(i=0; fita[i]!='\0' ; i++)
    {
       tamanho2++;
    }

    inicio = (tamanho - tamanho2);

    if(fita[0]==palavra[inicio]){
        aux = inicio;
        for(i=0 ; i < tamanho2 ; i++)
        {
            if(fita[i]==palavra[aux])
            {
                aux++;
            }else{
                printf("\nEntrada rejeitada => [%s] - nao contem o sufixo '%s'", palavra, fita);
                exit(0);
            }
        }
    }else{
        printf("\nEntrada rejeitada => [%s] - nao contem o sufixo '%s'", palavra, fita);
    }

    if(aux!=0){
        printf("\nEntrada aceita => [%s] - contem o sufixo '%s'", palavra, fita);
    }
}
