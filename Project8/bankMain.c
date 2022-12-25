#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char operationsNumberInput;
	int totalPara = 0, paraNumberMain, alinanParaNumber;
	char tekrarKarari = 'Y';
	char bankaIbanNoInput[30];
	
	while(tekrarKarari == 'Y'){
		
	printf("\nEFT islemi icin 1'e basiniz\n");
	printf("Havale islemi icin 2'e basiniz\n");
	printf("Bakiye sorgulama islemi icin 3'e basiniz\n");
	printf("Para yatirma islemi icin 4'e basiniz\n");
	printf("Cikis yapmak icin E veya Q'ye basiniz\n\n");

	printf("Yapmak istediginiz islem numarasini giriniz: ");
	scanf(" %c", &operationsNumberInput);
	
	switch(operationsNumberInput){
		
		case '1' :
				tekrarKarari = 'N';
			
				printf("Lutfen gondereceginiz hesabin ibanini giriniz (TR - USD - EUR): ");
				scanf(" %s", bankaIbanNoInput);
				
				if(bankaIbanNoInput[0] + bankaIbanNoInput[1] != 'T' + 'R' && bankaIbanNoInput[0] + bankaIbanNoInput[1] + bankaIbanNoInput[2] != 'U' + 'S' + 'D' && bankaIbanNoInput[0] + bankaIbanNoInput[1] + bankaIbanNoInput[2] != 'E' + 'U' + 'R'){
					printf("Lutfen (TR - USD - EUR) ulke kodlari ile baslayan iban numarasi giriniz!");
				}else{
				
				eft(bankaIbanNoInput, totalPara);
				
				}
				
				printf("\n\nTekrar islem yapmak ister misiniz (Y or N): ");
        		scanf(" %c", &tekrarKarari);
        		
        		if(tekrarKarari == 'N'){
        			cikis();
				}
	
			break;
			
		case '2' :
				tekrarKarari = 'N';
			
				printf("\nLutfen gondereceginiz hesabin ibanini giriniz: TR");
				scanf(" %s", bankaIbanNoInput);
			
				havale(bankaIbanNoInput, totalPara);
				
				printf("\n\nTekrar islem yapmak ister misiniz (Y or N): ");
				scanf(" %c", &tekrarKarari);
				
				if(tekrarKarari == 'N'){
        			cikis();
				}
				
			break;
			
		case '3' :
				tekrarKarari = 'N';
			
				bakiyeSorgu(totalPara);
				
				printf("\n\nTekrar islem yapmak ister misiniz (Y or N): ");
        		scanf(" %c", &tekrarKarari);
        		
        		if(tekrarKarari == 'N'){
        			cikis();
				}
	
			break;
			
		case '4' :
				tekrarKarari = 'N';
			
				totalPara += paraYatirma(totalPara);
				
				printf("\n\nTekrar islem yapmak ister misiniz (Y or N): ");
        		scanf(" %c", &tekrarKarari);
        		
        		if(tekrarKarari == 'N'){
        			cikis();
				}
	
			break;
			
		case 'E' :
				tekrarKarari = 'N';
			    cikis();
		    break;
		
		case 'Q' :
				tekrarKarari = 'N';
				cikis();
	    	break;
		
			default:
				
				printf("\nLutfen dogru numarayi giriniz!\n");
				tekrarKarari = 'Y';
	}
	}
	return 0;
}

int eft(char ibanNo[30], int para){
	
	char paraBirimi[5];
	int paraReturn, aktarilanPara;
	
	printf("Gonderilecek para birimini seciniz (1 TL = 18 Dolar), (1 TL = 20 Euro): ");
	scanf(" %s", paraBirimi);
		
		if(paraBirimi[0] + paraBirimi[1] == 'T' + 'L'){
			
			paraReturn = 0;
			
		}else if(paraBirimi[0] + paraBirimi[1] + paraBirimi[2] + paraBirimi[3] + paraBirimi[4] == 'D' + 'o' + 'l' + 'a' + 'r'){
			
			paraReturn = 1;
			
		}else if(paraBirimi[0] + paraBirimi[1] + paraBirimi[2] + paraBirimi[3] == 'E' + 'u' + 'r' + 'o'){
			
			paraReturn = 2;
			
		}else{
			printf("\n\nLutfen dogru para birimi giriniz (TL - Dolar - Euro)");
		}
		
		printf("aktarilacak para miktarini giriniz: ");
		scanf(" %d", &aktarilanPara);
	
		if(paraReturn == 0){
				aktarilanPara = aktarilanPara * 1;
		}else if(paraReturn == 1){
				aktarilanPara = aktarilanPara * 18;
		}else if(paraReturn == 2){
				aktarilanPara = aktarilanPara * 20;
		}
	
		if(aktarilanPara <= 0){
		
		printf("\nlutfen gecerli bir para miktari giriniz!");
		
		}else{
	
		if(para - aktarilanPara < 0){
		
		printf("\nHesabinizda yeterli para yoktur. Lutfen yeterli para ile islem yapiniz.");
		
		}else{
		
		printf("\n%s iban numarali hesaba para aktarimi tamamlanmistir. Kalan paraniz: %d", ibanNo, para - aktarilanPara);
	
		}
			
		}

}

int havale(char ibanNo[30], int para){
	
	int aktarilanPara;
	printf("aktarilacak para miktarini giriniz: ");
	scanf(" %d", &aktarilanPara);
	
	if(aktarilanPara <= 0){
		
	printf("\nlutfen gecerli bir para miktari giriniz!");
		
	}else{
	
	if(para - aktarilanPara < 0){
		
	printf("\nHesabinizda yeterli para yoktur. Lutfen yeterli para ile islem yapiniz.");
		
	}else{
		
	printf("\nTR%s iban numarali hesaba para aktarimi tamamlanmistir. Kalan paraniz: %d", ibanNo, para - aktarilanPara);
	
	}
			
	}
	
}

int bakiyeSorgu(int toplamBakiye){
	
	printf("\ntoplam bakiyeniz (TL): %d", toplamBakiye);
	
}

int paraYatirma(int simdikiPara){
	
	int yatirilanPara;
	
	printf("\nyatirmak istediginiz para miktarini (TL) giriniz: ");
	scanf("%d", &yatirilanPara);
	printf("\npara yatirma isleminiz gerceklesmistir.");
	
	return yatirilanPara;
}

int cikis(){
	
	printf("\nCikis Yapildi");
	exit;
	
}
