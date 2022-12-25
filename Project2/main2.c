#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	float number, sonuc, ara, i = 1;
	
	printf("hesaplanmasini istediginiz sayiyi giriniz: ");
	scanf("%f", &number);
	
	float fonk(float islem){
		while(i <= islem){
			
			ara = 1 / (i * i);
			sonuc = sonuc + ara;
			
			i++;
		}
		return 0;
	}
	fonk(number);
	printf("%f", sonuc);
	return 0;
}	

