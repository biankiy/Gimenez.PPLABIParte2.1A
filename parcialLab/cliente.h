#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    char sexo;
}eCliente;

#endif // CLIENTE_H_INCLUDED

void listarClientes(eCliente clientes[],int tamClientes);


int validarCliente(eCliente clientes[],int tamClientes,int id);
