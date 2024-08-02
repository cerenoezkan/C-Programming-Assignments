
#include <stdio.h>
#include <stdlib.h>

 void ters_sira(int sayi){
    int i,dizi[sayi]; //sabit bir boyut kullandım
    for(i=0;i<sayi;i++){
        printf("Bir sayi giriniz  ");
        scanf("%d",&dizi[i]);
    }
    
    for(i=sayi-1;i>=0;i--){ //en sondaki dizi değerinden başlayarak tersten yazdırma
        printf("%d ",dizi[i]);
    }
   
}

int main(){
    int s;
    printf("Kac tam sayi girilecek?\n");
    scanf("%d",&s);
    ters_sira(s);

    return 0;
}