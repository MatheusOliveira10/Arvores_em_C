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
				printf("Aninhamento: ");
				printArvore(bst);
				sleep(3);
				//instructions
			break;

			case 2:
				//Mostrar o no raiz
				printf("No raiz: ");
				noRaiz(bst);
				sleep(3);
				//instructions
			break;

			case 3:
				//Mostrar os nos ramo
				printf("Nos ramo: ");
				nosRamo(bst);
				sleep(5);
				//instructions
			break;

			case 4:
				//Mostrar os nos folha
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
				//Mostrar ancestrais e descendentes de um no
				printf("\nAncestrais: ");
				ancestralNo(bst->dir->dir->dir);
				printf("\nDescendentes: ");
				descendenteNo(bst, bst->dado);
				sleep(5);
				//instructions
			break;

			case 7:
				//Mostrar grau, altura, e nível de um no
				result = 0;
				result = grau_no(bst->dir->esq);
				printf("O grau do no: %d\n", result);
				result = altura(bst->dir);
				printf("A altura do no: %d\n", result); 
				result = nivelNo(bst->dir->esq);
				printf("O nivel do no: %d", result);
				sleep(4);

				//instructions
			break;

			case 8:
				//Mostrar buscas em pré ordem, pós ordem e em ordem
				printf(" Pre Order: ");
				preOrder(bst);
				printf("\nPos Order: ");
				postOrder(bst);
				printf("\nEm Order: ");
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
