
#include <stdio.h>
#include <stdlib.h>

void asal_sayi(int sayi){
    int i;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    if (sayi<=1) {
        printf("%d Asal değil\n", sayi);
        return; //fonksiyonun sonlandığını belirtmek için kullandım
    }

    for(i = 2; i<sayi; i++){
        if( sayi%i == 0 ){
            printf("%d Asal değil\n",sayi);
            return;
        } 
    }
    printf("%d Asaldir\n", sayi);
}

void binary_donusum(int sayi){
    int n=0;
    int binary[100];
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi); //decimal bir sayı aldık

    while (sayi > 0)
    {
        binary[n] = sayi % 2;
        n++;
        sayi /= 2;
    }

    printf("sayinin binary hali: ");
    for (int i = n - 1; i >= 0; i--) //sondan başlayarak dizi elemanlarını yazdırma
    {
        printf("%d", binary[i]);
    } 
   printf("\n");
}


void carp(int sayi1,int sayi2){ //carpma kullanmadan toplama yöntemiyle çarpma
    int sonuc=0,i=0;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);

    while(i<sayi2){
        i=i+1;
        sonuc=sonuc+sayi1;
    }
    printf("%d X %d = %d",sayi1,sayi2,sonuc);
    printf("\n");
}

void ebob(int sayi1,int sayi2){
    int kucuk_sayi,i,ebob=0;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    //ebob için küçük olan sayıya kadar bölünüp bölünmediğine bakmak yeterli oluyor
    if(sayi1<sayi2)
        kucuk_sayi=sayi1;
        else
        kucuk_sayi=sayi2;

    for(i=2;i<=kucuk_sayi;i++){ //her sayi zaten 1'e bölüneceği için i 2'den başlamalı
       if( (sayi1%i==0) && (sayi2%i==0) )
       ebob=i;

    }
    if(ebob != 0)
       printf("obeb(%d, %d)= %d",sayi1,sayi2,ebob);
       else 
       printf("obeb(%d, %d)= 1",sayi1,sayi2);

       printf("\n");

}

void ekok(int sayi1,int sayi2){
    int i,ekok=0;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    /*iki sayının en büyük ekok değeri bu sayıların çarpımı olacağı için önce alabileceği
    en büyük ekok değerini bulup daha sonra sayaçla bu i değerinin doğru olup olmadığını 
    kontrol ettim*/
    ekok=sayi1*sayi2;
    for(i=2;i<=ekok;i++){
        if((i%sayi1==0) && (i%sayi2==0)) /*Döngü içindeki if koşulu her bir i değerinin sayi1 ve sayi2'ye bölünüp bölünmediğini kontrol eder. 
        Yani i, hem sayi1 hem de sayi2 tarafından tam bölünüyorsa bu i değeri iki sayının ekokudur*/
            ekok=i; //Eğer i, hem sayi1 hem de sayi2'ye bölünüyorsa ekok güncellenir
        
    }

    printf("ekok(%d, %d)= %d",sayi1,sayi2,ekok);

    printf("\n");
}


int main(){
    char secenek;
    int sayi1, sayi2;
    printf("Bir operator seciniz..\n");
    printf("asal sayi (a)\n");
    printf("binary donusum (b)\n");
    printf("girilen iki sayiyi carp (c)\n");
    printf("girilen iki sayinin ortak bolenlerinin en buyugunu bul (d)\n");
    printf("girilen iki sayinin en kucuk ortak katini bul (e)\n");
    printf("cikis (x)\n");
    printf("-----------------------------------------------------\n");
    scanf(" %c",&secenek);

    while(secenek != 'x'){
        
        switch(secenek){
        case 'a':
            asal_sayi(sayi1);
            break;
        case 'b':
            binary_donusum(sayi1);
            break;
        case 'c':
            carp(sayi1,sayi2);
            break;
        case 'd':
            ebob(sayi1,sayi2);
            break;
        case 'e':
            ekok(sayi1,sayi2);
            break;
        case 'x':
            break; // Çıkış yapmak için kullanıldım
        default:
            printf("Gecersiz secim yaptiniz!\n");
    }
    printf("-----------------------------------------------------\n");
    printf("Bir operator seciniz..\n"); //kullanıcı bir işlem yaptıktan sonra, yeni bir işlem seçeneği görmesi için kullandım
    printf("asal sayi (a)\n");
    printf("binary donusum (b)\n");
    printf("girilen iki sayiyi carp (c)\n");
    printf("girilen iki sayinin ortak bolenlerinin en buyugunu bul (d)\n");
    printf("girilen iki sayinin en kucuk ortak katini bul (e)\n");
    printf("cikis (x)\n");
    printf("-----------------------------------------------------\n");
    scanf(" %c", &secenek); // Tekrar bir sonraki seçeneği al
}

    printf("Programdan cikis yaptiniz.\n");
    return 0;
}