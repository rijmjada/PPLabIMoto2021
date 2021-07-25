#ifndef SERVICIOS_H_INCLUDED
#define SERVICIOS_H_INCLUDED

#include "moto.h"

typedef struct
{
    int id;
    char descripcion[25];
    float precio;
    int isEmpty;

}eServicio;

int mostrarListaServicios(eServicio list[],int len);
int cargarDescServ(eServicio list[],int len,int idServ,char* descrip);
int validarServicio(eServicio list[],int len,int idComparar);
int get_MontoServicio(eServicio list[],int tam,int* monto,int idSer);

#endif // SERVICIOS_H_INCLUDED
