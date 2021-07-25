#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include "tipos.h"
#include "servicios.h"
#include "color.h"
#include "Genericas.h"
#include "cliente.h"


#define ERROR -1
#define ALLOK 1


typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int cilindrada;
    int idCliente;
    int isEmpty;

}eMoto;


int buscarLibreMoto(eMoto list[],int len);
int inicializarArrayMoto(eMoto list[],int len);
int mostrarListaMotos(eMoto list[],int len,eTipo listTipo[],int lenTipo,eColor listColor[],int lenColor,eCliente listCliente[],int lenCliente);
int mostrarUnaMoto(eMoto* unaMoto,eTipo listTipo[],int lenTipo,eColor listColor[],int lenColor,eCliente listCliente[],int lenCliente);
int altaMoto(eMoto list[],int len,int* id,eTipo listTipo[],int tamTipo,eColor listColor[],int tamColor);
int validarCilindrada(int *pResultado,char *pMensaje,char *msjError,int reintentos);
int moto_setValores(eMoto* unaMoto,int* idPtr,char* marca,int idTipo,int idColor,int cilindrada);
int retornarIndicePorID(eMoto list[],int len,int idValidar);
int bajaMoto(eMoto list[],int len);
int menuModif();
int modificarMoto(eMoto list[],int len,eColor listColor[],int lenColor);
int cargarDescMarca(eMoto list[],int len,int idMoto,char* descrip);
int validarIdMoto(eMoto list[],int len,int idValidar);
int ordenarMotosPorTipoyId(eMoto list[],int len);
int ordenarMotoPorTipo(eMoto list[],int len);

#endif // MOTO_H_INCLUDED

