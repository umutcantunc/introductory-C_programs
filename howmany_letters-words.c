#include <stdio.h>
#define BOYUT 300

// In this code, the descriptions and variables are written in Turkish.

int main () {

char umut[BOYUT];
char *umutPtr;
printf("Enter your sentence (Max 300 characters): ");
fgets(umut,BOYUT,stdin); //aradaki bosluklari da almasi icin scanf yerine fgets tercih edilmeli

umutPtr = umut;
int harf_sayac = 0;
int kelime_sayac = 0;
int tekkelime_yazilirsa = -1;
while ( *umutPtr != '\0') {
    printf("%c ",*umutPtr);
    harf_sayac++;
        if (*umutPtr == ' ') {
            tekkelime_yazilirsa = 0;
            harf_sayac--; // eger karakter bosluk ise harfi sayacini azalt
            if ( *(umutPtr+1) != ' ') {
                kelime_sayac++; //eger ust uste bosluk ise kelime sayacini arttir
            }
        }
    umutPtr++; // bir sonraki karaktere gecmek icin adres degerini arttir (bir sonraki adrese bakilir)
}

printf("\nNumber of letters: %d\n",harf_sayac-kelime_sayac+tekkelime_yazilirsa);
printf("Number of words : %d",kelime_sayac+1);
return 0;
}
