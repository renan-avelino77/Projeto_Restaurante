#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedidos_salao.h"

void adicionarPedido(Pedido **cabeca, int id) {
    Pedido *novo = (Pedido*)malloc(sizeof(Pedido));
    novo->id = id;
    novo->pratos = NULL;
    novo->prox = *cabeca;
    *cabeca = novo;
}

void adicionarPrato(Pedido *pedido, int prato_id) {
    Prato *novo = (Prato*)malloc(sizeof(Prato));
    novo->id = prato_id;
    novo->prox = pedido->pratos;
    pedido->pratos = novo;
}

void removerPrato(Pedido *pedido, int prato_id) {
    Prato **ptr = &(pedido->pratos);
    while (*ptr != NULL) {
        if ((*ptr)->id == prato_id) {
            Prato *temp = *ptr;
            *ptr = temp->prox;
            free(temp);
            
        }
        ptr = &((*ptr)->prox);
    }
    printf("Prato '%d' não encontrado.\n", nomePrato(prato_id));
}

void listarPedidos(Pedido *cabeca) {
    while (cabeca != NULL) {
        printf("Pedido ID: %d\n", cabeca->id);
        Prato *p = cabeca->pratos;
        while (p != NULL) {
            printf(" - %d\n", nomePrato(p->id));
            p = p->prox;
        }
        cabeca = cabeca->prox;
    }
}

Pedido* processarPedido(Pedido **cabeca) {
    if (*cabeca == NULL) return NULL;

    Pedido *pedido = *cabeca;
    *cabeca = (*cabeca)->prox;
    pedido->prox = NULL;
    return pedido;
}