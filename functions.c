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
	printf("=|  Selecione uma op��o:                                    |=\n");
	printf("=|                                                          |=\n");
	printf("=|  1- Imprimir a �rvore em aninhamento / barras            |=\n");
	printf("=|  2- Mostrar o n� raiz                                    |=\n");
	printf("=|  3- Mostrar os n�s ramo                                  |=\n");
	printf("=|  4- Mostrar os n�s folha                                 |=\n");
	printf("=|  5- Mostrar a altura e profundidade da �rvore            |=\n");
	printf("=|  6- Mostrar ancestrais e descendentes de um n�           |=\n");
	printf("=|  7- Mostrar grau, altura, profundidade e n�vel de um n�  |=\n");
	printf("=|  8- Mostrar buscas em pr� ordem, p�s ordem e em ordem    |=\n");
	printf("=|                                                          |=\n");
	printf("=|  0- Finalizar programa                                   |=\n");
	printf("=|                                                          |=\n");
	printf("==============================================================\n");
	
	scanf("%d", &opcao);
	system("cls");
	return opcao;
}

// Devolve o altura de um n� na �rvore bin�ria.

int altura(No *tree) {

    int a, b;
    if (tree == NULL){
    	return -1;
	}
    a = altura(tree->esq);
    b = altura(tree->dir);
    if (a > b) {
    	return a+1;
	}else {
		return b+1;
	}
}

//Devolve o grau de um n� na �rvore bin�ria.
int grau_no(No *noAtual)
	{
		if(noAtual != NULL)
			{
				int grau = 0;
				if(noAtual->esq != NULL)
					grau++;
				if(noAtual->dir != NULL)
					grau++;
				return grau;
			}
	}
	
	void ancestralNo(No *tree){
		No *aux;
		if(tree->pai != NULL){
			printf("Os ancestrais de %d s�o: ", tree->dado);
			aux = tree->pai;
		while(aux->pai != NULL){
			printf("%d ", aux->dado);
			aux = aux->pai;
		}
		printf("%d ",aux->dado);
		}else{
			printf("Este n� � um n� raiz");
		}
	}
