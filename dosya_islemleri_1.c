

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dosyayiCozveGuncelle(const char *dosyaAdi) {
    //dosyamdaki hem metni okuyacagi hem de cozecegi icin r+ modunu kullandım
    FILE *dosya = fopen(dosyaAdi, "r+");
    if (dosya == NULL) {
        printf("Dosya açilamadi.\n");
        return;
    }

    
    fseek(dosya, 0, SEEK_SET); //dosyamdaki şifrenin ilk satırından baslayarak okuyoruz
    char sifreliMetin[100];  
    fscanf(dosya, "%s", sifreliMetin); //buradaki fscanf() fonksiyonu ile dosya icindeki sifreli metni aliyorum

    
    char cozulmusMetin[200]; // cozulen metnin maksimum boyutunu belirliyorum 
    char *pSifreli = sifreliMetin; //bu ikisini döngü için gerekli,döngülerde pointer kullanmak ise yariyor
    char *pCozulmus = cozulmusMetin;

    while (*pSifreli) { //burda sifreli metin icerisinde hala dönecek karakter olana kadar döngü calisir
        char harf = *pSifreli++; /* pSifreli isaretcisinin gösterdigi konumdaki karakter sırasıyla harf degiskenine ataniyor ve
        pSifreli isareetcisi kaydirilarak bir sonraki karakterlere geciliyor. 
        her döngü adiminda siradaki karakterler alinmis oluyor */
        int tekrarSayisi = *pSifreli++ - '0'; /*isaretcinin gösterdigi karakterden sonraki sayiyi yani karakterin kac kez tekrar 
        edicelegini aktarmis oluyor */

        for (int i = 0; i < tekrarSayisi; i++) {
            *pCozulmus++ = harf; //burada da tekrar sayisi kadar olan harf pcozulmus pointırına atanıyor yani metni cozmus oluyoruz artık
        }
    }
    *pCozulmus = '\0'; //cosulmus metinin sonuna '\0' karkateri ekliyoruz ki c dilinde tanınmıs olsun 

    //cozdugum sifreli metni dosya sonuna eklemek icin:
    fseek(dosya, 0, SEEK_END); //dosya sonunu baz alarak islem yapar
    fprintf(dosya, " ve %s", cozulmusMetin); //dosya icerisindeki cozulmemis yapiyi silmeden cozulmus sifreyi gönderdim

    fclose(dosya); //dosya temizleme 

    printf("Metin başariyla çözüldü ve dosyaya yazildi.\n"); //kontrol amacli yazdirdim
}

int main() {
    //Deneme.txt dosyasindaki metni çözmek için dosyayi fonksiyona gönderiyorum
    dosyayiCozveGuncelle("Deneme.txt");

return 0;
}
