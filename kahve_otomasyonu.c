#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // Windows iCin gerekli baSlık dosyası

int main(void) {
    char kullaniciGiris;
    int ilkKontrol = 1; // Ilk CalıSma kontrolU
    int adet, toplamUcret, odeme, kalanUcret, ekOdeme = 0;
    
    do {
        if (ilkKontrol == 1) {
            system("CLS");printf("\n");printf("\n");printf("\n"); 
            system("color F1");

            // CerCeve Cizimi
            printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
                201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
                205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
                205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
            
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            printf("\t\t\t\t%c        SANAL KAFEYE HOSGELDINIZ          %c\n", 186, 186);
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            printf("\t\t\t\t%c Devam etmek icin D veya d tusuna basiniz %c\n", 186, 186);
            printf("\t\t\t\t%c    CIKIS icin ESC tusuna basiniz         %c\n", 186, 186);
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            printf("\t\t\t\t%c                                          %c\n", 186, 186);
            
            printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
                200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
                205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
                205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    
        }
        
        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
        
        if (kullaniciGiris == 27 || kullaniciGiris == 10) {
            char exitChoice;
            printf("\t\t\t\tCikmak istediginizden emin misiniz? (E/H): ");
            scanf(" %c", &exitChoice);
            
            if (exitChoice == 'e' || exitChoice == 'E') {
                break; // Programı sonlandırın
            }
            // Kullanıcı "e" veya "E" tuSlarına basmadıysa devam edin
        }
        else if(kullaniciGiris == 'D' || kullaniciGiris == 'd'){
            ilkKontrol = 0;
            system("CLS");printf("\n");printf("\n");printf("\n"); 

            printf("\t\t\t\t           KAHVE CESITLERI\n");
            printf("\t\t\t\t------------------------------------------------------------\n");
            printf("\n");
            printf("\t\t\t\t1- TURK KAHVESI 40 TL\n");
            printf("\t\t\t\t2- ESPRESSO 33 TL\n");
            printf("\t\t\t\t3- MOCHA 70 TL\n");
            printf("\t\t\t\t4- AMERICANO 47 TL\n");
            printf("\t\t\t\t5- CAPPUCINO 52 TL\n");
            printf("\t\t\t\t6- CAFFE LATTE 54 TL\n");
            printf("\t\t\t\t7- SICAK CIKOLATA 69 TL\n");
            printf("\t\t\t\t8- SALEP 73 TL\n");
            printf("\n");
            printf("\t\t\t\tLutfen seciminizi yapiniz:");
            
            // Clear the input buffer
            while (getchar() != '\n');
            
            scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
            
            if (kullaniciGiris < '1' || kullaniciGiris > '8') {
                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                ilkKontrol = 1; //ana ekrana geri dönmek icin
            } else {
                switch (kullaniciGiris) {
                    case '1':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t           TURK KAHVESI MENUSU\n");
                        printf("\t\t\t\t------------------------------------------------------------\n");
                        printf("\n");
                        printf("\t\t\t\t1- SUTLU TURK KAHVESI 49\n");
                        printf("\t\t\t\t2- DAMLA SAKIZLI TURK KAHVESI 46 TL\n");
                        printf("\t\t\t\t3- CIKOLATALI TURK KAHVESI 50 TL\n");
                        printf("\t\t\t\t4- SADE TURK KAHVESI 40 TL\n");
                        printf("\n");
                        printf("\t\t\t\tLutfen seciminizi yapiniz:");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');
                        
                        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                        
                        switch (kullaniciGiris) {
                            case '1':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet SUTLU TURK KAHVESI istiyorsunuz?\n");
                                printf("\t\t\t\tadet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 49;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet SUTLU TURK KAHVESI icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '2':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet DAMLA SAKIZLI TURK KAHVESI istiyorsunuz?\n");
                                printf("\t\t\t\tadet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 46;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet DAMLA SAKIZLI TURK KAHVESI icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '3':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet CIKOLATALI TURK KAHVESI istiyorsunuz?\n");
                                printf("\t\t\t\tadet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 50;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet CIKOLATALI TURK KAHVESI icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '4':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet SADE TURK KAHVESI istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 40;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet SADE TURK KAHVESI icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            default:
                                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                                ilkKontrol = 1; //ana ekrana geri dönmek icin
                        }
                        break;

                    case '2':
                        system("CLS");printf("\n");printf("\n");printf("\n");                         
                        system("color E0");

                        printf("\t\t\t\t           ESPRESSO MENUSU\n");
                        printf("\t\t\t\t------------------------------------------------------------\n");
                        printf("\n");
                        printf("\t\t\t\t1- DOUBLE ESPRESSO 43 TL\n");
                        printf("\t\t\t\t2- ESPRESSO MACCHIATO 40 TL\n");
                        printf("\t\t\t\t3- DOUBLE ESPRESSO MACCHIATO 46 TL\n");
                        printf("\t\t\t\t4- ESPRESSO 33 TL\n");
                        printf("\n");
                        printf("\t\t\t\tLutfen seciminizi yapiniz:");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');
                        
                        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                        
                        switch (kullaniciGiris) {
                            case '1':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet DOUBLE ESPRESSO istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");                   
                                toplamUcret = adet * 43;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet DOUBLE ESPRESSO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '2':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet ESPRESSO MACCHIATO istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 40;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet ESPRESSO MACCHIATO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '3':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet DOUBLE ESPRESSO MACCHIATO istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 46;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet DOUBLE ESPRESSO MACCHIATO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '4':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet ESPRESSO istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 33;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet ESPRESSO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                            default:
                                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                                ilkKontrol = 1; //ana ekrana geri dönmek icin
                        }
                        break;
               
                    case '3':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t           MOCHA MENUSU\n");
                        printf("\t\t\t\t------------------------------------------------------------\n");
                        printf("\n");
                        printf("\t\t\t\t1- SADE MOCHA 70 TL\n");
                        printf("\t\t\t\t2- CIKOLATALI MOCHA 75 TL\n");
                        printf("\n");
                        printf("\t\t\t\tLutfen seciminizi yapiniz:");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');
                        
                        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                        
                        switch (kullaniciGiris) {
                            case '1':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet SADE MOCHA istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al

                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 70;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet SADE MOCHA icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '2':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet CIKOLATALI MOCHA istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 75;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet CIKOLATALI MOCHA icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            default:
                                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                                ilkKontrol = 1; //ana ekrana geri dönmek icin
                        }
                        break;

                    case '4':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t      Kac adet AMERICANO istiyorsunuz?\n");
                        printf("\t\t\t\tAdet giriniz:  ");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');

                        scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                        
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");  
                        toplamUcret = adet * 47;
                        printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                        printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                        
                        scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                        kalanUcret = toplamUcret - odeme;
                        
                        while (kalanUcret > 0) {
                            system("CLS");printf("\n");printf("\n");printf("\n"); 
                            printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                            printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                            printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                            printf("\t\t\t\t    Ek ucreti giriniz: ");
                            scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                            
                            odeme = odeme + ekOdeme;
                            kalanUcret = toplamUcret - odeme;
                        }
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        printf("\t\t\t\t%d adet AMERICANO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                        printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                        printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                        break;

                    case '5':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t      Kac adet CAPPUCINO istiyorsunuz?\n");
                        printf("\t\t\t\tAdet giriniz:  ");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');

                        scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                        
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");  
                        toplamUcret = adet * 52;
                        printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                        printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                        
                        scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                        kalanUcret = toplamUcret - odeme;
                        
                        while (kalanUcret > 0) {
                            system("CLS");printf("\n");printf("\n");printf("\n"); 
                            printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                            printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                            printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                            printf("\t\t\t\t    Ek ucreti giriniz: ");
                            scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                            
                            odeme = odeme + ekOdeme;
                            kalanUcret = toplamUcret - odeme;
                        }
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        printf("\t\t\t\t%d adet CAPPUCINO icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                        printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                        printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                        break;

                    case '6':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t      Kac adet  CAFFE LATTE istiyorsunuz?\n");
                        printf("\t\t\t\tAdet giriniz:  ");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');

                        scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                        
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");  
                        toplamUcret = adet * 52;
                        printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                        printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                        
                        scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                        kalanUcret = toplamUcret - odeme;
                        
                        while (kalanUcret > 0) {
                            system("CLS");printf("\n");printf("\n");printf("\n"); 
                            printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                            printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                            printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                            printf("\t\t\t\t    Ek ucreti giriniz: ");
                            scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                            
                            odeme = odeme + ekOdeme;
                            kalanUcret = toplamUcret - odeme;
                        }
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        printf("\t\t\t\t%d adet  CAFFE LATTE icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                        printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                        printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                        break;

                    case '7':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");

                        printf("\t\t\t\t           SICAK CIKOLATA MENUSU\n");
                        printf("\t\t\t\t------------------------------------------------------------\n");
                        printf("\n");
                        printf("\t\t\t\t1- KAHVELI SICAK CIKOLATA 69 TL\n");
                        printf("\t\t\t\t2- BEYAZ SICAK CIKOLATA 73 TL\n");
                        printf("\n");
                        printf("\t\t\t\tLutfen seciminizi yapiniz:");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');
                        
                        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                        
                        switch (kullaniciGiris) {
                            case '1':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet KAHVELI SICAK CIKOLATA istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 69;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet KAHVELI SICAK CIKOLATA icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '2':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet BEYAZ SICAK CIKOLATA istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 73;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet BEYAZ SICAK CIKOLATA icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            default:
                                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                                ilkKontrol = 1; //ana ekrana geri dönmek icin
                        }
                        break;

                    case '8':
                        system("CLS");printf("\n");printf("\n");printf("\n"); 
                        system("color E0");
                        
                        printf("\t\t\t\t           SALEP MENUSU\n");
                        printf("\t\t\t\t------------------------------------------------------------\n");
                        printf("\n");
                        printf("\t\t\t\t1- SEKERLI (Seker Ucretsiz) 73 TL\n");
                        printf("\t\t\t\t2- SEKERSIZ 73 TL\n");
                        printf("\n");
                        printf("\t\t\t\tLutfen seciminizi yapiniz:");
                        
                        // Clear the input buffer
                        while (getchar() != '\n');
                        
                        scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                        
                        switch (kullaniciGiris) {
                            case '1':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet SEKERLI SALEP istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 73;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet SEKERLI SALEP icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            case '2':
                                system("CLS");printf("\n");printf("\n");printf("\n"); 

                                printf("\t\t\t\t      Kac adet SEKERSIZ SALEP istiyorsunuz?\n");
                                printf("\t\t\t\tAdet giriniz:  ");
                                
                                scanf("%d", &adet); // Klavyeden bir tuS giriSi al
                                
                                printf("\n");
                                printf("\n");
                                printf("\n");
                                printf("\n");  
                                toplamUcret = adet * 73;
                                printf("\t\t\t\tToplam odemeniz gereken tutar: %d\n", toplamUcret);
                                printf("\t\t\t\tYatiracaginiz ucreti giriniz:  ");
                                
                                scanf("%d", &odeme); // Klavyeden bir tuS giriSi al
                                kalanUcret = toplamUcret - odeme;
                                
                                while (kalanUcret > 0) {
                                    system("CLS");printf("\n");printf("\n");printf("\n"); 
                                    printf("\t\t\t\tODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz:\n");
                                    printf("\t\t\t\t    Toplam odemeniz gereken tutar: %d\n", toplamUcret);
                                    printf("\t\t\t\t    Su ana kadar odediginiz miktar: %d\n", odeme);
                                    printf("\t\t\t\t    Ek ucreti giriniz: ");
                                    scanf("%d", &ekOdeme); // Klavyeden bir tuS giriSi al
                                    
                                    odeme = odeme + ekOdeme;
                                    kalanUcret = toplamUcret - odeme;
                                }
                                system("CLS");printf("\n");printf("\n");printf("\n"); 
                                printf("\t\t\t\t%d adet SEKERSIZ SALEP icin %d TL odemeniz alinmistir.\n", adet, toplamUcret);
                                printf("\t\t\t\t    Geri odeme: %d TL\n", odeme-toplamUcret);
                                printf("\t\t\t\t    AFIYET OLSUN. YINE BEKLERIZ\n\n"); getchar();
                                break;
                                
                            default:
                                printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                                ilkKontrol = 1; //ana ekrana geri dönmek icin
                        }
                        break;
                    default:
                        // This should not happen due to the validation, but include a default case
                        printf("\t\t\t\tLUTFEN GECERLI BIR SECIM YAPINIZ\n");
                }
                scanf("%c", &kullaniciGiris); // Klavyeden bir tuS giriSi al
                break;
                }
            }
            
            
            // Clear the input buffer
            while (getchar() != '\n');
            
        } while (1);  // Sonsuz bir döngU oluSturarak programı ESC tuSuna basılana kadar devam ettirin
        
        return 0;
    }
