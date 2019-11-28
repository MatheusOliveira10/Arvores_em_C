#include <stdio.h>
#include "functions.c"

int main(){
	int option, loop = 1, result = 0, a;
	No *bst;
	
	initBST(&bst);
	
	insertNode(&bst, 50);
	insertNode(&bst, 40);
	insertNode(&bst, 70);
	insertNode(&bst, 30);
	insertNode(&bst, 45);
	insertNode(&bst, 75);
	insertNode(&bst, 48);
	insertNode(&bst, 49);
	insertNode(&bst, 47);
	insertNode(&bst, 69);
	insertNode(&bst, 73);
	insertNode(&bst, 90);
	insertNode(&bst, 55);
	insertNode(&bst, 59);
	insertNode(&bst, 43);
	
	while(loop){
		option = menu();
		
		switch(option){
			case 1:
				//Imprimir a árvore em aninhamento / barras
				//instructions
			break;
			
			case 2:
				//Mostrar o nó raiz
				printf("No raiz: ");
				noRaiz(bst);
				sleep(3);
				//instructions
			break;
			
			case 3:
				//Mostrar os nós ramo
				printf("Nos ramo: ");
				nosRamo(bst);
				sleep(5);
				//instructions
			break;
			
			case 4:
				//Mostrar os nós folha
				printf("Nos folha: ");
				nosFolha(bst);
				sleep(5);
				//instructions
			break;
			
			case 5:
				//Mostrar a altura e profundidade da arvore
				result = altura(bst);
				if(result != -1){
					printf("A altura/profundidade da arvore eh: %d", result);
				}else{
					printf("A arvore esta vazia!...");
				}
				sleep(5);
				//instructions
			break;
			
			case 6:
				//Mostrar ancestrais e descendentes de um nó
				ancestralNo(bst->dir->dir);
				sleep(5);
				//instructions
			break;
			
			case 7:
				//Mostrar grau, altura, profundidade e nível de um nó
				//instructions
			break;
			
			case 8:
				//Mostrar buscas em pré ordem, pós ordem e em ordem
				printf(" Pre Order: ");
				preOrder(bst);
				printf("\nPost Order: ");
				postOrder(bst);
				printf("\n  In Order: ");
				inOrder(bst);				
				sleep(5);
				//instructions
			break;
			
			case 0:
				//Finalizar programa
				printf("Finalizando programa...");
				loop = 0;
			break;
			
			default:
				printf("Opção invalida, tente novamente...");
				sleep(5);
		}		
	}	
	return 0;
}
