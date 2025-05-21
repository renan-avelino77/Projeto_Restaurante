#ifndef PEDIDOS_COZINHA_H
#define PEDIDOS_COZINHA_H
#include "pedidos_salao.h"

typedef struct PedidoCozinha {
    Pedido *pedido;
    struct PedidoCozinha *prox;
} PedidoCozinha;

typedef struct Fila {
    PedidoCozinha *inicio;
    PedidoCozinha *fim;
} Fila;

void inicializarFila(Fila *fila);
void enfileirar(Fila *fila, Pedido *pedido);
Pedido* desenfileirar(Fila *fila);
void listarFila(Fila *fila);


#endif