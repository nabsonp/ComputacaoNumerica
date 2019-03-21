#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    // Exercício 01
    lista l;
    criaLista(&l);
    pessoa p;
    p.idade = 2;
    strcpy(p.nome,"AS");
    insere(&l,p);
    p.idade = 5;
    strcpy(p.nome,"ASA");
    insere(&l,p);
    p.idade = 9;
    strcpy(p.nome,"ASAsd");
    insere(&l,p);
    //enderecos(l);
    mostraElementos(l);
    printf("***********\n");
    removeEle(&l,"ASA");
    mostraElementos(l);

    // Exercício 02
    /*int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i<10; i++) {
        printf("Endereço do elemento %d: %p\n", i, &vetor[i]);
    }*/

    //Exercício 03
    /*
    int i, j, n = 10000;
    double **M = malloc(n * sizeof(double*));
    for (i=0; i<n; i++){
        M[i] = malloc(n * sizeof(double));
        for (j=0; j<n; j++)
            M[i][j] = 0;
    }
    free(M);
    */
    return 0;
}
