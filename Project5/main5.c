#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float floatNumber, floatKare;
	int intNumber,  intKare, hata;
	char yuzde = '%';
	
	printf("karesini almak istediginiz sayiyi giriniz: ");
	scanf("%f", &floatNumber);
	
	intNumber = floatNumber;
	
	floatKare = floatNumber * floatNumber;
	intKare = intNumber * intNumber;
	
	hata = (floatKare - intKare) / intKare * 100;
	
	printf("sayinizin karesi %c%d hata payi ile: %d", yuzde, hata, intKare);
	
	return 0;
}
