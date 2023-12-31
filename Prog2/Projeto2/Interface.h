//
// Created by joana on 24/08/2023.
//

#ifndef PROG2_INTERFACE_H
#define PROG2_INTERFACE_H
//Inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>
#include "../libprg/src/include/libprg/Lista_encadeada.h"

typedef struct entrada{
    char loginn[10];
    char senhaa[10];
} Entrada;

typedef struct usuario{
    char login[10];
    char senha[10];
    char nome[30];
} usuario;

//Definições das funções
void leitura(FILE * arq,int i, no_t *inicio, parametro entrada);
void leitura_imprime(FILE * arq,int i, no_t *inicio);
void leitura_2(FILE * arq,int i, Entrada entradas);
void Saudacoes(usuario nomes);
void erro();
void senha_incorreta();

#endif
