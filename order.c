#include <stdio.h>
#include <stdlib.h>
#include "order.h"

static void ascending2(int* ptr1, int* ptr2){
	if(*ptr1 > *ptr2){
		int temp;
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	
	}else{
		printf("Nothing");
	
	}

}

void ascending3(int* ptr1, int* ptr2, int* ptr3){
	if(isAscending(ptr1, ptr2, ptr3) == TRUE){
		printf("Already in ascending order!");
	}
	else if(*ptr1 > *ptr2){
		ascending2(ptr1,ptr2);
	
	}
	if(*ptr2 > *ptr3){
		ascending2(ptr2,ptr3);
	 
	}
	
	

}

int isAscending(int* ptr1,int* ptr2, int* ptr3){
	if(*ptr1 < *ptr2 && *ptr2 < *ptr3){
		return TRUE;
	}else {
		return FALSE;
	}
}

void descending3(int* ptr1, int* ptr2, int* ptr3){
	if(isAscending(ptr1, ptr2, ptr3) == TRUE){
	
		if(*ptr1 < *ptr2){
			int temp = *ptr2;
			*ptr2 = *ptr1;
			*ptr1 = temp;
		

		}
		if(*ptr2 < *ptr3){
			int temp1 = *ptr3;
			*ptr2 = *ptr3;
			*ptr3 = temp1;
		}
	}


}
