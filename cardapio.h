#ifndef CARDAPIO_H
#define CARDAPIO_H

typedef enum {
    SOPA_CEBOLA = 1,
    SALADA_CAESAR,
    BRUSCHETTA,
    CARPACCIO,
    CAMARAO,
    LASANHA,
    FILE_MIGNON,
    FRANGO,
    BACALHAU,
    RISOTO,
    TIRAMISU,
    CHEESECAKE,
    MOUSSE,
    PUDIM,
    SORVETE
}id;

void cardapio();
const char* nomePrato(int id);


#endif