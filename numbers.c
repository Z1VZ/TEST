#include <stdlib.h>
#include <stdio.h>
#include "order.h"

int main(){
	printf("hello");
	printf("Newhello1");
	int choice1;
	int* ptr1 = (int*) malloc(sizeof(int));
	int* ptr2  = (int*) malloc(sizeof(int));
	int* ptr3 = (int*) malloc(sizeof(int));
	printf("Input 3 integers for sorting");
	printf("num 1: ");
	scanf("%d", ptr1);
	printf("num 2: ");
	scanf("%d", ptr2);
	printf("num 3: ");
	scanf("%d", ptr3);

	printf("AScending(1) or Descending(2)?");
	scanf("%d",&choice1);
	
	if(choice1 == 1){
		ascending3(ptr1, ptr2, ptr3);
			
	} else if(choice1 == 2){
		descending3(ptr1, ptr2, ptr3);
	
	}

	free(ptr1);
	free(ptr2);
	free(ptr3);
	return 0;
}


