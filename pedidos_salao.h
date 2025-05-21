#ifndef PEDIDOS_SALAO_H
#define PEDIDOS_SALAO_H

typedef struct Prato {
    char nome[50];
    struct Prato *prox;
} Prato;

typedef struct Pedido {
    int id;
    Prato *pratos;
    struct Pedido *prox;
} Pedido;

void adicionarPedido(Pedido **cabeca, int id);
void removerPrato(Pedido *pedido, const char *nome_prato);
void listarPedidos(Pedido *cabeca);
Pedido* processarPedido(Pedido **cabeca);

#endif