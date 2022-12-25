#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Program rastgele bir say� �retecek ve kullan�c�dan tahmin etmesini isteyecektir. Say�y� tahmin etmek i�in 7 deneme hakk� verilecek, her denemede program girilen say�n�n rasgele olu�turulmu� say�dan
// k���k veya b�y�k oldu�unu bildirecek, b�ylece kullan�c� belirli say�y� kolayca tahmin edebilecektir.

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
