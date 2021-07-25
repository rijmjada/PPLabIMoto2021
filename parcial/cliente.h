#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR -1
#define ALLOK 1

typedef struct
{
    int id;
    char nombre[24];
    char sexo;
    int isEmpty;

}eCliente;

int inicializarArrayClientes(eCliente list[],int len);
int cargarNombreCliente(eCliente list[],int len,int idCliente,char* nombreAux);

#endif // CLIENTE_H_INCLUDED
