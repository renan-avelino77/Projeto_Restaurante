#ifndef PEDIDOS_SALAO_H
#define PEDIDOS_SALAO_H

typedef struct Prato {
    int id;  // Número do prato
    struct Prato *prox;
} Prato;

typedef struct Pedido {
    int id;
    Prato *pratos;
    struct Pedido *prox;
} Pedido;

void adicionarPedido(Pedido **cabeca, int id);
void adicionarPrato(Pedido *pedido, int prato_id);
void removerPrato(Pedido *pedido, int prato_id);
void listarPedidos(Pedido *cabeca);
Pedido* processarPedido(Pedido **cabeca);

#endif