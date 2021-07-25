#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED


#define ERROR -1
#define ALLOK 1

typedef struct
{
    int id;
    char nombreColor[25];
    int isEmpty;

}eColor;

int cargarDescColor(int idColor,eColor list[],int len,char* aux);
int mostrarListaColor(eColor list[],int len);
int inicializarArrayColor(eColor list[],int len);
int validarIdColor(eColor list[],int len,int idComparar);
int ordenarListaColoresAux(eColor list[],int len);

#endif // COLOR_H_INCLUDED
