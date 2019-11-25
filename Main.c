#include <stdio.h>
#include "functions.c"

int main(){
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
	
	printf(" Pre Order: ");
	preOrder(bst);
	printf("\nPost Order: ");
	postOrder(bst);
	printf("\n  In Order: ");
	inOrder(bst);
	
	return 0;
}
