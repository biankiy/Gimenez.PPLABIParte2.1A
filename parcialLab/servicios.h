#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[30];
    float precio;
}eServicio;

#endif // SERVICIO_H_INCLUDED



void listarServicios(eServicio servicios[],int tam);
int validarServicios(eServicio servicios[],int tam,int id);


