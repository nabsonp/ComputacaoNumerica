#include <string.h>
#include <stdlib.h>
#include<stdio.h>
#include"lista.h"

void criaLista(lista *l){
    l->prim = NULL;
}

void insere(lista *l, pessoa p) {
    pessoa *pe = (pessoa*) malloc(sizeof(pessoa));
    pe->idade = p.idade;
    strcpy(pe->nome,p.nome);
    if (l->prim == NULL) {
        l->prim = pe;
        pe->prox = NULL;
    } else {
        pe->prox = l->prim;
        l->prim = pe;
    }
}

void enderecos(lista l){
    while (l.prim != NULL) {
        printf("Endereço do primeiro elemento: %p\n",l.prim);
        printf("Endereço apontado pelo primeiro elemento: %p\n", l.prim->prox);
        l.prim = l.prim->prox;
    }
}

void mostraElementos(lista l) {
    if (l.prim == NULL)
        printf("Lista vazia.\n");
    else {
        while (l.prim != NULL){
            printf("%d\n", l.prim->idade);
            printf("%s\n", l.prim->nome);
            l.prim = l.prim->prox;
        }
    }
}

void removeEle(lista *l, char nome[20]) {
    pessoa *aux, *rm;
    if (strcmp(l->prim->nome,nome) == 0) {
        aux = l->prim->prox;
        l->prim = aux;
        free(aux);
        return;
    } else {
        aux = l->prim;
        while (aux->prox != NULL) {
            if (strcmp(aux->prox->nome,nome) == 0) {
                rm = aux->prox;
                aux->prox = rm->prox;
                free(rm);
                return;
            }
        }
    }
    printf("Elemento não encontrado.\n");
}
