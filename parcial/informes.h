#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

#include "tipos.h"
#include "servicios.h"
#include "color.h"
#include "Genericas.h"
#include "trabajo.h"


int menu();
int informes();
int informar_MotoPorColor(eMoto list[],int len,eColor listColor[],int lenColor,eTipo listTipo[],int lenTipo,eCliente listCliente[],int lenCliente);
int informar_MotoPorTipo(eMoto list[],int len,eColor listColor[],int lenColor,eTipo listTipo[],int lenTipo,eCliente listCliente[],int lenCliente);
int informar_MotoMaryoCc(eMoto list[],int len,eColor listColor[],int lenColor,eTipo listTipo[],int lenTipo,eCliente listCliente[],int lenCliente);
int informar_MotoSeparadaTipo(eMoto list[],int len,eColor listColor[],int lenColor,eTipo listTipo[],int lenTipo,eCliente listCliente[],int lenCliente);
int informar_cantColorYTipo(eMoto list[],int len,eColor listColor[],int lenColor,eTipo listTipo[],int lenTipo);
int informar_ColorMasElegido(eMoto list[],int len,eColor listColor[],int lenColor);
int informar_TrabajosSeleccion(eMoto list[],int len,eTrabajo listJob[],int lenJob,eServicio listServ[],int lenServ);
int informar_SumarImportes(eMoto list[],int len,eTrabajo listJob[],int lenJob,eServicio listServ[],int lenServ);
int informar_ServiciosPorMoto(eTrabajo listJob[],int lenJob,eServicio listServ[],int lenServ,eMoto listMoto[],int lenMoto);
int informar_ServicioPorFecha(eServicio listServ[],int lenServ,eTrabajo listJob[],int lenJob);

#endif // INFORMES_H_INCLUDED
