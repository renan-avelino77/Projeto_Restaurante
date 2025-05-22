#include <stdio.h>
#include "pedidos_cozinha.h"
#include "pedidos_salao.h"

int main(){
    

    Pedido *salao = NULL;
    Fila cozinha;
    inicializarFila(&cozinha);

    int op, id = 1;

    do {
        printf("\n--RESTAURANTE--\n");
        printf("1.Fazer pedido\n");
        printf("2.Remover prato do seu pedido\n");
        printf("3.Processar pedido\n");
        printf("4.Listar pedidos da cozinha\n");
        printf("5.Pedidos em andamento\n");
        printf("6.Sair");
        printf("Digite um número: \n");
        scanf("%d", &op);

        if (op==1){
            adicionarPedido(&salao, id++);
            printf("\nSeu pedido foi adicionado!\n");
        } else if (op==2){
            break;
        }
    } while (op != 6);

    return 0;
}