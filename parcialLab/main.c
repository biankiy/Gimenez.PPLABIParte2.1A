#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "tipo.h"
#include "moto.h"
#include "color.h"
#include "trabajo.h"
#include "servicio.h"
#include "cliente.h"
#include "informes.h"

#define TAMTIPOS 4
#define TAMCOLOR 5
#define TAMSERVICIOS 4
#define TAMTRABAJO 100
#define TAMMOTO 1000
#define TAMCLIENTE 5
#define TAMHARDCODEO 9
#define TAMHARDCODEOTRABAJOS 5

//listar, validar, cargar descripcion, agregar al alta, agregar al listado

/** \brief Muestra el menu de opciones y le pide al usuario que elija una
 *
 * \return La opcion ingresada por el usuario
 *
 */
int menu();

int main()
{
    eColor colores[TAMCOLOR]={
                                {10000,"Gris"},
                                {10001,"Negro"},
                                {10002,"Blanco"},
                                {10003,"Azul"},
                                {10004,"Rojo"}
                                };
    eTipo tipos[TAMTIPOS]={
                            {1000,"Enduro"},
                            {1001,"Chopera"},
                            {1002,"Scooter"},
                            {1003,"Ciclomotor"}
                            };
    eServicio servicios[TAMSERVICIOS]={
                                        {2000,"Limpieza",250},
                                        {2001,"Ajuste",300},
                                        {2002,"Balanceo",17},
                                        {2003,"Cadena",90}
                                        };
    eCliente clientes[TAMCLIENTE]={
                                    {200,"Flor",'f'},
                                    {201,"Hugo",'m'},
                                    {202,"Ivana",'f'},
                                    {203,"Matias",'m'},
                                    {204,"Luciano",'m'}
                                    };
    eMoto motos[TAMMOTO];
    eTrabajo trabajos[TAMTRABAJO];

    char confirma='n';
    int idTrabajo=1;
    int idMotos=3000;
    int flag=1;//se pone 1 si el empleado carga una moto
    /*ACORDARME DE PONER LA FLAG EN 0*/

    inicializarMotos(motos,TAMMOTO);
    inicializarTrabajos(trabajos,TAMTRABAJO);
    hardcodearMotos(motos,TAMHARDCODEO);
    hardcodearTrabajos(trabajos,TAMHARDCODEOTRABAJOS);

    do
    {
        switch(menu())
        {
         case 1:
             if(hacerAltaMoto(motos,TAMMOTO,idMotos,colores,TAMCOLOR,tipos,TAMTIPOS,clientes,TAMCLIENTE))
             {
                 idMotos++;
                 flag=1;
             }
            break;
         case 2:
             if(flag)
             {
                 modificarMoto(motos,TAMMOTO,colores,TAMCOLOR,tipos,TAMTIPOS,clientes,TAMCLIENTE);
             }else
             {
                 printf("Primero debe cargar una moto\n\n");
             }
            break;
         case 3:
             if(flag)
             {
                 hacerBajaMoto(motos,TAMMOTO,colores,TAMCOLOR,tipos,TAMTIPOS,clientes,TAMCLIENTE);
             }else
             {
                 printf("\nPrimero debe cargar una moto\n\n");
             }
            break;
         case 4:
             system("cls");
             listarMotos(motos,TAMMOTO,colores,TAMCOLOR,tipos,TAMTIPOS,clientes,TAMCLIENTE);
            break;
         case 5:
             system("cls");
             listarTipos(tipos,TAMTIPOS);
            break;
         case 6:
             system("cls");
             listarColores(colores,TAMCOLOR);
            break;
         case 7:
             system("cls");
             listarServicios(servicios,TAMSERVICIOS);
            break;
         case 8:
             if(hacerAltaTrabajo(trabajos,TAMTRABAJO,idTrabajo,colores,TAMCOLOR,tipos,TAMTIPOS,servicios,TAMSERVICIOS,motos,TAMMOTO,clientes,TAMCLIENTE))
             {
                 idTrabajo++;
             }
            break;
         case 9:
             system("cls");
             listarTrabajos(trabajos,TAMTRABAJO,servicios,TAMSERVICIOS,motos,TAMMOTO);
            break;
         case 10:
             informar(motos,TAMMOTO,colores,TAMCOLOR,tipos,TAMTIPOS,clientes,TAMCLIENTE,trabajos,TAMTRABAJO,servicios,TAMSERVICIOS);
            break;
         case 11:
            confirma=getCharTwoOptions("\nEsta seguro de que desea salir? (s/n)","Ingrese s o n:",'s','n');
            break;
         default:
            printf("Opcion no valida\n\n");
            break;
        }

    system("pause");

    }while(confirma=='n');
    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("   ***MENU MOTOS***\n\n");
    printf("1.Alta moto\n");
    printf("2.Modificar moto\n");
    printf("3.Baja moto\n");
    printf("4.Listar motos\n");
    printf("5.Listar tipos\n");
    printf("6.Listar colores\n");
    printf("7.Listar servicios\n");
    printf("8.Alta trabajo\n");
    printf("9.Listar trabajos\n");
    printf("10.Informes\n");
    printf("11.Salir\n");
    printf("_____________________________________\n\n");

    opcion=getInt("Elija una opcion:","ERROR\nReingrese opcion:");
    return opcion;
}
