
#include "cliente.h"

int inicializarArrayClientes(eCliente list[],int len)
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


int cargarNombreCliente(eCliente list[],int len,int idCliente,char* nombreAux)
{
    int ret = ERROR;

    if( list != NULL && len >0 && nombreAux != NULL )
    {
        for(int i=0; i<len; i++)
        {
            if(list[i].id == idCliente)
            {
                strcpy(nombreAux,list[i].nombre);
                break;
            }
        }
        ret = ALLOK;
    }
    return ret;
}
