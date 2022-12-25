#include <stdio.h>
#include <stdlib.h>

int main() {

	int arrayList[5] = {1, 2, 3, 4, 5};
	int *arrayNumber = arrayList;
	int i = 0;
	
	int fun(int arrayPosition){
		
	for(i; i < 5; i++){
	printf("%d", arrayPosition);	
	}
		
		
	return arrayPosition;	
	}
	
	fun(arrayNumber);
	
	
	
	
	return 0;
}
