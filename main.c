#include <stdio.h>
#include <stdlib.h>
#include "pedidos_salao.h"
#include "pedidos_cozinha.h"
#include "cardapio.h"

int main() {
    Pedido *salao = NULL;
    Fila cozinha;
    inicializarFila(&cozinha);

    int opcao, id = 1;

    do {
        printf("\n1. Adicionar Pedido\n");
        printf("2. Remover Prato do Pedido\n");
        printf("3. Processar Pedido\n");
        printf("4. Listar Pedidos Pendentes\n");
        printf("5. Listar Pedidos em Processamento\n");
        printf("6. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            adicionarPedido(&salao, id);
            printf("Adicione pratos ao pedido %d (digite 0 para parar):\n", id);
            int prato_id;
            cardapio();
            while (1) {
                printf("Número do prato: ");
                scanf("%d", &prato_id);
                if (prato_id == 0) break;
                if (prato_id >=1 && prato_id <=15) {
                    adicionarPrato(salao, prato_id);
                } else {
                    printf("Prato inválido.\n");
                }
            }
            id++;
        } else if (opcao == 2) {
            int pid, prato_id;
            printf("ID do pedido: ");
            scanf("%d", &pid);
            printf("Número do prato: ");
            scanf("%d", &prato_id);

            Pedido *p = salao;
            while (p != NULL && p->id != pid) p = p->prox;

            if (p) removerPrato(p, prato_id);
            else printf("Pedido não encontrado.\n");
        } else if (opcao == 3) {
            Pedido *p = processarPedido(&salao);
            if (p) {
                enfileirar(&cozinha, p);
                printf("Pedido %d processado para a cozinha.\n", p->id);
            } else {
                printf("Nenhum pedido para processar.\n");
            }
        } else if (opcao == 4) {
            listarPedidos(salao);
        } else if (opcao == 5) {
            listarFila(&cozinha);
        }
    } while (opcao != 6);

    printf("Saindo...\n");
    return 0;
}
