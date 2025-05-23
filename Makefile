CC=gcc
CFLAGS=-Wall

all: restaurante

restaurante: main.c pedidos_salao.c pedidos_cozinha.c cardapio.c
	$(CC) $(CFLAGS) -o restaurante main.c pedidos_salao.c pedidos_cozinha.c cardapio.c

clean:
	rm -f restaurante
