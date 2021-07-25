#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "color.h"

int inicializarArrayColor(eColor list[],int len)
{
    int ret = ERROR;

    if(list != NULL && len >0)
    {
        for(int i=0; i<len; i++)
        {
            list[i].isEmpty = 1;
        }
        ret = ALLOK;
    }
    return ret;
}

int cargarDescColor(int idColor,eColor list[],int len,char* aux)
{
    int ret = ERROR;

    if( list != NULL && len >0 && aux != NULL )
    {
        for(int i=0; i<len; i++)
        {
            if(list[i].id == idColor)
            {
                strcpy(aux,list[i].nombreColor);
                break;
            }
        }
        ret = ALLOK;
    }
    return ret;
}

int mostrarListaColor(eColor list[],int len)
{
    int ret = ERROR;
    if(list != NULL && len >0)
    {
        system("cls");
        printf("\n**Colores**\n");
        printf("\nID       Descripcion\n");
        printf("***********************\n\n");
        for(int i=0; i<len; i++)
        {
            if(list[i].isEmpty == 0)
            {
                printf("%4d %12s\n",list[i].id,list[i].nombreColor);
                printf("----------------------------\n");
            }
        }
        printf("\n\n");
    }
    return ret;
}

int validarIdColor(eColor list[],int len,int idComparar)
{
    int ret = ERROR;

    if(list != NULL && len >0)
    {
        for(int i=0; i<len; i++)
        {
            if(list[i].id == idComparar && list[i].isEmpty == 0)
            {
                ret = ALLOK;
            }
        }
    }
    return ret;
}

int ordenarListaColoresAux(eColor list[],int len)
{
    int ret = ERROR;
    eColor aux;

    if(list != NULL && len >0)
    {
        for(int i=0; i<len-1; i++)
        {
            for(int j=i+1; j<len; j++)
            {
                if(list[i].isEmpty < list[j].isEmpty)
                {
                    aux = list[i];
                    list[i] = list[j];
                    list[j] = aux;
                }
            }
        }
    }
    return ret;
}
