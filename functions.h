#define false 0
#define true !false
#ifndef ESTRUTURA_H
#define ESTRUTURA_H

typedef unsigned char bool;

typedef struct _no{
	int dado;
	struct _no *pai;
	struct _no *esq;
	struct _no *dir;
} No;


void initBST (No**);
bool isBSTEmpty (No*);

void insertNode (No**, int);
int removeNode (No**);

int search (No*, int);
void preOrder(No *tree);
void postOrder(No *tree);
void inOrder(No *tree);

int altura(No *tree);
int profundidade(No *tree);

void ancestralNo(No *tree);

void noRaiz(No *tree);
void nosRamo(No *tree);
void nosFolha(No *tree);

int menu();

#endif
