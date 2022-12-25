#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Program rastgele bir sayý üretecek ve kullanýcýdan tahmin etmesini isteyecektir. Sayýyý tahmin etmek için 7 deneme hakký verilecek, her denemede program girilen sayýnýn rasgele oluþturulmuþ sayýdan
// küçük veya büyük olduðunu bildirecek, böylece kullanýcý belirli sayýyý kolayca tahmin edebilecektir.

int main() {
	
	int randomNumber, i, searchNumber;
	
	srand(time(NULL));
	randomNumber = rand() % 100;
	
	for(i = 0; i < 10; i++){
		
		scanf("%d", &searchNumber);
		
		if(searchNumber < randomNumber){
			
			printf("sayi buyuktur");
			
		}else if(searchNumber > randomNumber){
			
			printf("sayi kucuktur");
			
		}else if(searchNumber == randomNumber){
			
			printf("dogru sonuc");
			break;
			
		}
		
	}
	
	printf("%d", randomNumber);

	return 0;
}
