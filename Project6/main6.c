#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bas, son, yuzluk, ondalik, birler, uclusayitoplami, tumtoplam = 0, z = 0, i;
    printf("Sayi Toplama Sistemine Hos Geldiniz\n\n\n");
    printf("Uc basamakli baslangic sayisini giriniz : ");
    scanf("%d", &bas);
    printf("Uc basamakli bitis sayisini giriniz : ");
    scanf("%d", &son);

    for (i = bas; i < son; i++){
        yuzluk = i / 100;
        ondalik = (i % 100) / 10;
        birler = i % 10;
        uclusayitoplami = birler + ondalik + yuzluk;
        if (uclusayitoplami == 10)
        {
            tumtoplam += i;
            z++;
        }
    }
    printf("Ortalamaniz : %d", tumtoplam / z);
}

