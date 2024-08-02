
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **names; //dizi icinde dinamik olarak elemenların kapladıgı yeri degistirmek icin double pointer kullandık 
    int adet, i; 

    printf("Kac tane isim gireceksin? ");
    scanf("%d", &adet);

    names = (char**)malloc(adet * sizeof(char*)); //names dizisinin bellekte ne kadar yer tutacagini hesapladim
    //pointerın ne kadar yer kapladıgını hesaplamıs olduk 
    if (names == NULL) {
        printf("Yeterli bellek yok\n");
        return 1;
    }

    for (i = 0; i < adet; i++) {
        char isim[100];
        printf("%d. ismi girin: ", i + 1); //dizi isimlerini alıyoruz 
        scanf("%s", isim);
        printf("\n");

        names[i] = (char*)malloc((strlen(isim) + 1) * sizeof(char)); //dizi isimlerinin boyutuna göre bellekte kapladiklari alan
        if (names[i] == NULL) {
            printf("Yeterli bellek yok\n");
            return 1;
        }

        strcpy(names[i], isim); //sirayla diziye girilen isim degerleri ataniyor, girilen adet sayisina kadar bu döngü devam eder
    }
    
    printf("Girilen isimler:\n\n"); //girilen isimleri ekrana bastirmak icin 
    for (i = 0; i < adet; i++) {
        printf("%s\n",names[i]);
    }

    for (i = 0; i < adet; i++) { 
        free(names[i]); //isimleri sıfırlayıp,serbest bırakıyoruz
    }
    free(names); //pointerın boyutu kadar kapladıgı kısmı sıfırlıyoruz

return 0;
}
