#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "moto.h"
#include "servicios.h"
#include "tipos.h"
#include "color.h"
#include "fecha.h"
#include "hardcodeo.h"
#include "Genericas.h"
#include "informes.h"
#include "trabajo.h"
#include "cliente.h"

#define TAM_TIPO 4
#define TAM_SERV 4
#define TAM_COLOR 5
#define TAM_MOTO 20
#define TAM_JOB 20
#define TAM_Clientes 50


int main()
{
    eMoto listMoto[TAM_MOTO];
    eTrabajo listJob[TAM_JOB];
    eCliente listCliente[TAM_Clientes];

    eTipo listTipo[TAM_TIPO] =
    {
        {1000,"Enduro",0},
        {1001,"Chopera",0},
        {1002,"Scooter",0},
        {1003,"Ciclomotor",0}

    };

    eServicio listServ[TAM_SERV]=
    {
        {20000,"Limpieza",250,0},
        {20001,"Ajuste",300,0},
        {20002,"Balanceo",17,0},
        {20003,"Cadena",190,0}
    };

    eColor listColor[TAM_COLOR] =
    {
        {10000,"Gris",0},
        {10001,"Negro",0},
        {10002,"Blanco",0},
        {10003,"Azul",0},
        {10004,"Rojo",0}
    };

    inicializarArrayMoto(listMoto,TAM_MOTO);
    inicializarArrayJobs(listJob,TAM_JOB);
    inicializarArrayClientes(listCliente,TAM_Clientes);

    int flagMoto = 0;
    int flagJob = 0;
    int idMoto = 1000;
    int idJobs = 1;
    int idCliente = 1;
    char salir = 'n';

    flagMoto = hardcodearMotos(listMoto,TAM_MOTO,&idMoto,15);
    flagJob = hardcodearJobs(listJob,TAM_JOB,&idJobs,15);
    hardcodearClientes(listCliente,TAM_Clientes,&idCliente,10);

    do
    {
        switch(menu())
        {
        case 1:
            if(altaMoto(listMoto,TAM_MOTO,&idMoto,listTipo,TAM_TIPO,listColor,TAM_COLOR))
            {
                printf("\nAlta Exitosa!.\n\n");
                flagMoto = 1;
            }
            else
            {
                printf("\nOcurrio un error!.\n\n");
            }
            break;

        case 2:
            if(flagMoto)
            {
                mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
                modificarMoto(listMoto,TAM_MOTO,listColor,TAM_COLOR);
            }
            else
            {
                printf("\nPrimero debe dar de alta una moto!.\n\n");
            }

            break;

        case 3:
            if(flagMoto)
            {
                mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
                bajaMoto(listMoto,TAM_MOTO);
            }
            else
            {
                printf("\nPrimero debe dar de alta una moto!.\n\n");
            }

            break;

        case 4:
            ordenarMotosPorTipoyId(listMoto,TAM_MOTO);
            mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
            break;

        case 5:
            mostrarListaTipos(listTipo,TAM_TIPO);
            break;

        case 6:
            mostrarListaColor(listColor,TAM_COLOR);
            break;

        case 7:
            mostrarListaServicios(listServ,TAM_SERV);
            break;

        case 8:
            mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
            if(altaTrabajo(listJob,TAM_JOB,&idJobs,listServ,TAM_SERV,listMoto,TAM_MOTO))
            {
                printf("\nAlta Exitosa!.\n");
            }
            else
            {
                printf("\nOcurrio un error!.\n\n");
            }
            break;

        case 9:
            if(flagJob)
            {
                mostrarListaTrabajos(listJob,TAM_JOB,listServ,TAM_SERV,listMoto,TAM_MOTO);
            }
            else
            {
                printf("\nPrimero debe dar de alta un Trabajo!.\n\n");
            }

            break;

        case 10:
            switch(informes())
            {
                case 1:
                    informar_MotoPorColor(listMoto,TAM_MOTO,listColor,TAM_COLOR,listTipo,TAM_TIPO,listCliente,TAM_Clientes);
                    break;

                case 2:
                    informar_MotoPorTipo(listMoto,TAM_MOTO,listColor,TAM_COLOR,listTipo,TAM_TIPO,listCliente,TAM_Clientes);
                    break;

                case 3:
                    informar_MotoMaryoCc(listMoto,TAM_MOTO,listColor,TAM_COLOR,listTipo,TAM_TIPO,listCliente,TAM_Clientes);
                    break;

                case 4:
                    informar_MotoSeparadaTipo(listMoto,TAM_MOTO,listColor,TAM_COLOR,listTipo,TAM_TIPO,listCliente,TAM_Clientes);
                    break;

                case 5:
                    informar_cantColorYTipo(listMoto,TAM_MOTO,listColor,TAM_COLOR,listTipo,TAM_TIPO);
                    break;

                case 6:
                   informar_ColorMasElegido(listMoto,TAM_MOTO,listColor,TAM_COLOR);
                    break;

                case 7:
                   mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
                   informar_TrabajosSeleccion(listMoto,TAM_MOTO,listJob,TAM_JOB,listServ,TAM_SERV);
                    break;

                case 8:
                    mostrarListaMotos(listMoto,TAM_MOTO,listTipo,TAM_TIPO,listColor,TAM_COLOR,listCliente,TAM_Clientes);
                    informar_SumarImportes(listMoto,TAM_MOTO,listJob,TAM_JOB,listServ,TAM_SERV);
                    break;

                case 9:
                    mostrarListaServicios(listServ,TAM_SERV);
                    informar_ServiciosPorMoto(listJob,TAM_JOB,listServ,TAM_SERV,listMoto,TAM_MOTO);
                    break;

                case 10:
                    informar_ServicioPorFecha(listServ,TAM_SERV,listJob,TAM_JOB);
                    break;

                case 11:
                    //salir
                    break;
            }
            break;

        case 11:
            validarSioNo(&salir,"\nConfirma Salida [s/n]: \n","\nDato Invalido.Reingrese: \n",10);
            break;
        }

        system("pause");

    }
    while(salir == 'n');

    return 0;
}
