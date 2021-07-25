#ifndef HARDCODEO_H_INCLUDED
#define HARDCODEO_H_INCLUDED

#include "moto.h"
#include "servicios.h"
#include "tipos.h"
#include "color.h"
#include "fecha.h"
#include "trabajo.h"
#include "cliente.h"


int hardcodearMotos(eMoto list[],int len,int* id,int cant);
int hardcodearTipos(eTipo list[],int len,int* id,int cant);
int hardcodearJobs(eTrabajo list[],int len,int* id,int cant);
int hardcodearClientes(eCliente list[],int len,int* id,int cant);

#endif // HARDCODEO_H_INCLUDED
