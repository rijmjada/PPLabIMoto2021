#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

#include "fecha.h"
#include "moto.h"

typedef struct
{
    int id;
    int idMoto;
    int idServicio;
    eFecha fecha;
    int isEmpty;

}eTrabajo;

int inicializarArrayJobs(eTrabajo list[],int len);
int buscarLibreJob(eTrabajo list[],int len);
int mostrarUnTrabajo(eTrabajo* UnTrabajo,eServicio listServ[],int lenServ,eMoto listMoto[],int lenMoto);
int mostrarListaTrabajos(eTrabajo list[],int len,eServicio listServ[],int lenServ,eMoto listMoto[],int lenMoto);
int altaTrabajo(eTrabajo list[],int len,int* idJob,eServicio listServ[],int lenServ,eMoto listMoto[],int lenMoto);

#endif // TRABAJO_H_INCLUDED
