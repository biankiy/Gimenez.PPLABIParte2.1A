#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[20];
}eColor;

#endif // COLOR_H_INCLUDED


void listarColores(eColor colores[],int tam);


int validarColor(eColor colores[],int tam,int id);


