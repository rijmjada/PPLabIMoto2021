
#include "tipos.h"

int inicializarArrayTipo(eTipo list[],int len)
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


int cargarDescTipo(int idTipo, eTipo list[],int len,char* aux)
{
    int ret = ERROR;

    if( list != NULL && len >0 && aux != NULL )
    {
        for(int i=0; i<len; i++)
        {
            if(list[i].id == idTipo)
            {
                strcpy(aux,list[i].descripcion);
                break;
            }
        }
        ret = ALLOK;
    }
    return ret;
}

int mostrarListaTipos(eTipo list[],int len)
{
    int ret = ERROR;
    if(list != NULL && len >0)
    {
        system("cls");
        printf("\n**Tipos**\n");
        printf("\nID       Descripcion\n");
        printf("***********************\n\n");
        for(int i=0; i<len; i++)
        {
            if(list[i].isEmpty == 0)
            {
                printf("%4d %12s\n",list[i].id,list[i].descripcion);
                printf("----------------------------\n");
            }
        }
        printf("\n\n");
    }
    return ret;
}

int validarIdTipo(eTipo list[],int len,int idComparar)
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
