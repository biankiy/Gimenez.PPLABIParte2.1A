#include "color.h"
#include "tipo.h"
#include "moto.h"
#include "servicio.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED


typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    int idMoto;
    int idServicio;
    eFecha fecha;
    int  isEmpty;
}eTrabajo;

#endif // TRABAJO_H_INCLUDED
int hacerAltaTrabajo(eTrabajo vec[],int tam,int id,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eServicio servicios[],int tamServicios,eMoto motos[],int tamMotos,eCliente clientes[],int tamClientes);
void inicializarTrabajos(eTrabajo vec[],int tam);
int buscarLibreTrabajo(eTrabajo vec[],int tam);
void listarTrabajos(eTrabajo vec[],int tam,eServicio servicios[],int tamServicios,eMoto motos[],int tamMotos);
int cargarDescripcionServicio(char descripcion[],int id,eServicio servicios[],int tamServicios);
void mostrarTrabajo(eTrabajo trabajo,eServicio servicios[],int tamServicios,eMoto motos[],int tamMotos);
float buscarPrecio(int id,eServicio servicios[],int tamServicios);
void hardcodearTrabajos(eTrabajo trabajos[],int tamTrabajos);
