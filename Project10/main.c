#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
   char str2[30], str1[30];
    int i, uzunluk;
    printf("Bir dizgi giriniz\n");
    gets(str1);
    uzunluk=strlen(str1);
    for(i=0; i<uzunluk; i++){
        strncpy(&str2[i], &str1[uzunluk-1-i], 1);
        printf("%s", str2);
        return 0;
    }
    return 0;
}
