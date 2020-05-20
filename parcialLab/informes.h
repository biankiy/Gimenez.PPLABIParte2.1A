#include "tipo.h"
#include "moto.h"
#include "color.h"
#include "servicio.h"
#include "trabajo.h"
#include "cliente.h"

#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED

void informar(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes,eTrabajo trabajos[],int tamTrabajos,eServicio servicios[],int tamServicios);//fijarme si tengo que agregar trabajos y servicios


char menuInformes();


void informarMotosPorTipo(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);//funciona ok


void informarMotosDeUnColor(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


void informarMotosDeUnTipo(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


void informarMotosMayorCilindrada(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);

void informarCantidadTipoYColor(eMoto vec[],int tam,eColor colores[],int tamColores,eTipo tipos[],int tamTipos);


void informarCantidadDeMismoTipo(eMoto vec[],int tam,eTipo tipos[],int tamTipos);


int contarPorTipo(eMoto motos[],int tamMotos,int idTipo);


void informarCantidadDeMismoColor(eMoto vec[],int tam,eColor colores[],int tamColores);


int contarPorColor(eMoto motos[],int tamMotos,int idColor);


void informarCantidadPorTipo(eMoto vec[],int tam,eTipo tipos[],int tamTipos);

void informarColorMasUsado(eMoto vec[],int tam,eColor colores[],int tamColores);

void informarTipoMasUsado(eMoto vec[],int tam,eTipo tipos[],int tamTipos);



void informarTrabajosPorMoto(eMoto vec[],int tam,eTrabajo trabajos[],int tamTrabajos,eServicio servicios[],int tamServicios,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


void  informarServiciosPorFecha(eTrabajo trabajos[],int tamTrabajos,eServicio servicios[],int tamServicios);

void informarGananciasPorMoto(eMoto vec[],int tam,eTrabajo trabajos[],int tamTrabajos,eServicio servicios[],int tamServicios,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);


void informarPorServicio(eMoto vec[],int tam,eTrabajo trabajos[],int tamTrabajos,eServicio servicios[],int tamServicios,eColor colores[],int tamColores,eTipo tipos[],int tamTipos,eCliente clientes[],int tamClientes);
