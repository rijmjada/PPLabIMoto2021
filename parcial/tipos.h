#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR -1
#define ALLOK 1


typedef struct
{
    int id;
    char descripcion[25];
    int isEmpty;

}eTipo;

int inicializarArrayTipo(eTipo list[],int len);
int cargarDescTipo(int idTipo,eTipo list[],int len,char* aux);
int mostrarListaTipos(eTipo list[],int len);
int validarIdTipo(eTipo list[],int len,int idComparar);

#endif // TIPOS_H_INCLUDED


