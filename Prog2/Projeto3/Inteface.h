//
// Created by lenit on 28/11/2023.
//

#ifndef PROG2_INTEFACE_H
#define PROG2_INTEFACE_H

#include "../libprg/src/include/libprg/tabela.h"

typedef struct usuario{
    char login[10];
    char senha[10];
    char nome[30];
} usuario;

typedef struct parametro{
    char *login;
    char *senha;
} parametro;

void leitura_tabela_hash(FILE * arq,int i,dicionario_t *d);
void buscar_a(dicionario_t *dicionario, usuario entradas);
void buscar_b(dicionario_t *dicionario, parametro entradas);

#endif //PROG2_INTEFACE_H
