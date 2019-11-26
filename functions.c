#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void initBST(No **bst) {
	*bst = NULL;
}

bool isBSTEmpty(No *tree) {
	if (tree == NULL)
		return true;

	return false;		
}

void preOrder (No *tree) {
	printf(" %d ", tree->dado);
	
	if(tree->esq != NULL)
		preOrder(tree->esq);
	
	if(tree->dir != NULL)
		preOrder(tree->dir);	
}

void postOrder (No *tree) {
	if(tree->esq != NULL)
		postOrder(tree->esq);
	
	if(tree->dir != NULL)
		postOrder(tree->dir);	
		
	printf(" %d ", tree->dado);
}

void inOrder (No *tree) {
	if(tree->esq != NULL)
		inOrder(tree->esq);
	
	printf(" %d ", tree->dado);
	
	if(tree->dir != NULL)
		inOrder(tree->dir);	
}

int search (No *tree, int num) {
	No *atual;
	int nivel = 1;
	
	if(isBSTEmpty(tree)){
		printf("A arvore esta vazia!\n");
		return;
	}

	atual = tree;
	
	while (atual != NULL){
		
		if(atual->dado == num){
			return atual->dado;
		}
	
		if(atual->dado > num)
			atual = atual->esq;
		else
			atual = atual->dir;
		
		nivel++;
	}
	
	return -1;
}

void insertNode(No **tree, int num) {
	No *novo;
	No *atual;
	No *pai;	
	
	novo = (No *)malloc(sizeof(No));
	pai = (No *)malloc(sizeof(No));
	
	novo->pai = NULL;
	novo->dir = NULL;
	novo->esq = NULL;
	novo->dado = num;  
	
	if(isBSTEmpty(*tree))
  	{
    	*tree = novo;
    	return;
  	}
  	
  	atual = *tree;
  	
  	while(atual != NULL){
  		pai = atual;
		  
		if( num < atual->dado ){
    		atual = atual->esq;
  		}else if( num > atual->dado ){
    		atual = atual->dir;
  		}else{
    		printf(" No duplicado !!!\n");
			free(novo);
			free(pai);
			return;
		}
	}
	
	novo->pai = pai;
	
	if(num < pai->dado)
		pai->esq = novo;
	else
		pai->dir = novo;
}

//Menu ----------------------------------------
int menu(){
	
	int opcao;
	
	system("cls");
	printf("==============================================================\n");
	printf("=|                    Binary Search Tree                    |=\n");
	printf("=|----------------------------------------------------------|=\n");
	printf("=|                         M E N U                          |=\n");
	printf("==============================================================\n");
	printf("=|  Selecione uma opcao:                                    |=\n");
	printf("=|                                                          |=\n");
	printf("=|  1- Imprimir a arvore em aninhamento / barras            |=\n");
	printf("=|  2- Mostrar o no raiz                                    |=\n");
	printf("=|  3- Mostrar os nos ramo                                  |=\n");
	printf("=|  4- Mostrar os nos folha                                 |=\n");
	printf("=|  5- Mostrar a altura e profundidade da arvore            |=\n");
	printf("=|  6- Mostrar ancestrais e descendentes de um no           |=\n");
	printf("=|  7- Mostrar grau, altura, profundidade e nivel de um no  |=\n");
	printf("=|  8- Mostrar buscas em pre ordem, pos ordem e em ordem    |=\n");
	printf("=|                                                          |=\n");
	printf("=|  0- Finalizar programa                                   |=\n");
	printf("=|                                                          |=\n");
	printf("==============================================================\n");
	
	scanf("%d", &opcao);
	system("cls");
	return opcao;
}
