typedef struct pessoa {
    int idade;
    char nome[200];
    struct pessoa *prox;
} pessoa;

typedef struct {
    pessoa *prim;
} lista;

void criaLista(lista *l);

void insere(lista *l, pessoa p);

void enderecos(lista l);

void removeEle(lista *l, char nome[20]);

void mostraElementos(lista l);
