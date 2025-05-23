#include <stdio.h>
#include <stdlib.h>
#include "pedidos_cozinha.h"

void inicializarFila(Fila *fila) {
    fila->inicio = fila->fim = NULL;
}

void enfileirar(Fila *fila, Pedido *pedido) {
    PedidoCozinha *novo = (PedidoCozinha*)malloc(sizeof(PedidoCozinha));
    novo->pedido = pedido;
    novo->prox = NULL;

    if (fila->fim == NULL) {
        fila->inicio = fila->fim = novo;
    } else {
        fila->fim->prox = novo;
        fila->fim = novo;
    }
}

Pedido* desenfileirar(Fila *fila) {
    if (fila->inicio == NULL) return NULL;

    PedidoCozinha *temp = fila->inicio;
    Pedido *pedido = temp->pedido;
    fila->inicio = temp->prox;

    if (fila->inicio == NULL) fila->fim = NULL;

    free(temp);
    return pedido;
}

void listarFila(Fila *fila) {
    PedidoCozinha *atual = fila->inicio;
    while (atual != NULL) {
        printf("Pedido em processamento ID: %d\n", atual->pedido->id);
        Prato *p = atual->pedido->pratos;
        while (p != NULL) {
            printf(" - %d\n", p->id);
            p = p->prox;
        }
        atual = atual->prox;
    }
}
