#include <stdio.h>
#include "cardapio.h"

void cardapio(){
    
    printf("\n--- Entradas ---\n");
    printf("1. Sopa de Cebola\n");
    printf("2. Salada Caesar\n");
    printf("3. Bruschetta\n");
    printf("4. Carpaccio de Carne\n");
    printf("5. Camarão ao Alho\n");

    printf("\n--- Pratos Principais ---\n");
    printf("6. Lasanha à Bolonhesa\n");
    printf("7. Filé Mignon com Fritas\n");
    printf("8. Frango Grelhado com Legumes\n");
    printf("9. Bacalhau à Gomes de Sá\n");
    printf("10. Risoto de Cogumelos\n");

    printf("\n--- Sobremesas ---\n");
    printf("11. Tiramisu\n");
    printf("12. Cheesecake de Frutas Vermelhas\n");
    printf("13. Mousse de Chocolate\n");
    printf("14. Pudim de Leite\n");
    printf("15. Sorvete de Baunilha com Calda de Morango\n");   
}

const char* nomePrato(int id){
    switch(id) {
        case SOPA_CEBOLA: return "Sopa de Cebola";
        case SALADA_CAESAR: return "Salada Caesar";
        case BRUSCHETTA: return "Bruschetta";
        case CARPACCIO: return "Carpaccio de Carne";
        case CAMARAO: return "Camarão ao Alho";
        case LASANHA: return "Lasanha à Bolonhesa";
        case FILE_MIGNON: return "Filé Mignon com Fritas";
        case FRANGO: return "Frango Grelhado com Legumes";
        case BACALHAU: return "Bacalhau à Gomes de Sá";
        case RISOTO: return "Risoto de Cogumelos";
        case TIRAMISU: return "Tiramisu";
        case CHEESECAKE: return "Cheesecake de Frutas Vermelhas";
        case MOUSSE: return "Mousse de Chocolate";
        case PUDIM: return "Pudim de Leite";
        case SORVETE: return "Sorvete de Baunilha com Calda de Morango";
        default: return "Desconhecido";
    }
}