#include <stdio.h>
#include "functions.c"

int main(){
	int option, loop = 1;
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
	
	while(loop){
		option = menu();
		
		switch(option){
			case 1:
				//Imprimir a �rvore em aninhamento / barras
				//instructions
			break;
			
			case 2:
				//Mostrar o n� raiz
				//instructions
			break;
			
			case 3:
				//Mostrar os n�s ramo
				//instructions
			break;
			
			case 4:
				//Mostrar os n�s folha
				//instructions
			break;
			
			case 5:
				//Mostrar a altura e profundidade da �rvore
				//instructions
			break;
			
			case 6:
				//Mostrar ancestrais e descendentes de um n�
				//instructions
			break;
			
			case 7:
				//Mostrar grau, altura, profundidade e n�vel de um n�
				//instructions
			break;
			
			case 8:
				//Mostrar buscas em pr� ordem, p�s ordem e em ordem
				//instructions
			break;
			
			case 0:
				//Finalizar programa
				printf("Finalizando programa...");
				loop = 0;
			break;
			
			default
				printf("Op��o inv�lida, tente novamente...");
		}		
	}
		
	
	printf(" Pre Order: ");
	preOrder(bst);
	printf("\nPost Order: ");
	postOrder(bst);
	printf("\n  In Order: ");
	inOrder(bst);
	
	return 0;
}
