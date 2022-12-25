#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int numberMax, numberMin, minYuzler, minOnlar, minBirler, maxYuzler, toplam, sayac = 0;
		
	printf("3 basamakli sayinizin nereden baslayacagini belirtiniz: ");
	scanf("%d", &numberMin);
	
	printf("3 basamakli sayinizin nerede bitecegini belirtiniz: ");
	scanf("%d", &numberMax);
	
	minYuzler = numberMin / 100;
	
	maxYuzler = numberMax / 100;
	
	while(minYuzler == 0 || maxYuzler == 0){
		
	printf("yanlis sayi girdiniz, 3 basamakli sayinizin nereden baslayacagini belirtiniz: ");
	scanf("%d", &numberMin);
	
	printf("yanlis sayi girdiniz, 3 basamakli sayinizin nerede bitecegini belirtiniz: ");
	scanf("%d", &numberMax);
	
	minYuzler = numberMin / 100;
		
	maxYuzler = numberMax / 100;
	}	
	
	while(numberMin <= numberMax){
		
		minBirler = numberMin % 10;
		minOnlar = (numberMin / 10) % 10;
		minYuzler = numberMin / 100;
		
		if(minYuzler + minOnlar + minBirler == 10){
			
			toplam += numberMin;
			
			sayac++;
		}
		numberMin++;
	}
	
	printf("10'lu sayilarin ortalamasi: %d", toplam / sayac);
	
	return 0;
}
