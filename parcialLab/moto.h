#include "color.h"
#include "tipo.h"
#include "cliente.h"

#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int cilindrada;
    int idCliente;
    int isEmpty;
}eMoto;


#endif // MOTO_H_INCLUDED


void inicializarMotos(eMoto vec[],int tam);

int buscarIndiceLibreMoto(eMoto vec[],int tam);
int hacerAltaMoto(eMoto vec[],int tam,int id,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);
int buscarPorId(eMoto vec[],int tam,int id);

void modificarMoto(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


char menuModificacion();

void hacerBajaMoto(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


int cargarDescripcionColor(char descripcion[],int id,eColor colores[],int tamColores);

int cargarDescripcionTipo(char descripcion[],int id,eTipo tipos[],int tamTipos);


void listarMotos(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);

void ordenarMotos(eMoto vec[],int tam,eTipo tipos[],int tamTipos);

void mostrarMoto(eMoto moto,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


void hardcodearMotos(eMoto vec[],int tam);


int cargarNombre(char nombre[],int idCliente,eCliente clientes[],int tamClientes);
int cargarMarca(char descripcion[],int idMoto,eMoto motos[],int tamMotos);
