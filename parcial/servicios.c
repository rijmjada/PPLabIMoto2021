
#include "servicios.h"

int mostrarListaServicios(eServicio list[],int len)
{
    int ret = ERROR;

    if( list != NULL && len >0 )
    {
        system("cls");
        printf("\n**Servicios**\n");
        printf("\nID       Descripcion  Precio\n");
        printf("****************************\n\n");
        for(int i=0; i<len; i++)
        {
            if(list[i].isEmpty == 0)
            {
                printf("%4d  %12s  %4.2f\n"
                       ,list[i].id
                       ,list[i].descripcion
                       ,list[i].precio);
            printf("----------------------------\n");
            }
        }
        printf("\n\n");
        ret = ALLOK;
    }
    return ret;
}

int cargarDescServ(eServicio list[],int len,int idServ,char* descrip)
{
    int ret = ERROR;

    if( list != NULL && len >0 && descrip != NULL )
    {
        for(int i=0; i<len; i++)
        {
            if(list[i].id == idServ)
            {
                strcpy(descrip,list[i].descripcion);
                break;
            }
        }
        ret = ALLOK;
    }
    return ret;
}

int validarServicio(eServicio list[],int len,int idComparar)
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

int get_MontoServicio(eServicio list[],int tam,int* monto,int idSer)
{
    int retorno = ERROR;

    if( list != NULL && monto != NULL )
    {
          for(int i=0; i<tam; i++)
        {
            if(list[i].id == idSer)
            {
               *monto = list[i].precio;
                retorno = ALLOK;
                break;
            }
        }
    }
    return retorno;
}

