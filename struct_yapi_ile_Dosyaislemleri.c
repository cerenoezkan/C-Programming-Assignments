

#include <stdio.h>
#include <stdlib.h>

struct Student 
{ 
    int id; 
    char name[16]; 
    char surname[16]; 
    int average; 
}; 

// Fonksiyon prototipleri
void veriOku(FILE* fptr);
void id_oku(FILE* fptr, int aranan_id);
void tek_sirali_kayit(FILE* fptr);

int main() {
    struct Student student;
    int secim, aranan_id;
    FILE* fptr;
    
    fptr = fopen("Ogrenciler.dat", "rb"); //binary modda dosyadan okuma işlemi yapilacak
    if (fptr == NULL) {
        printf("Dosya acma hatasi\n");
        exit(1); // dosya acilmadigi takdirde programi sonlandiracak 
    }
    
    do {
        printf("\nYapmak istediginiz secimi girin:\n");
        printf("1 - Dosyadaki butun verileri fread fonksiyonu ile okumak\n");
        printf("2 - Dosya icinde ogrenci id bilgisine gore arama yapip bilgilerini yazdirmak\n");
        printf("3 - Dosya icinde tek sirali kayitlari yazdirmak\n");
        printf("Cikis icin -1 girin..\n");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1: 
                veriOku(fptr);
                break;
            case 2:
                printf("Arama yapilacak ogrenci id: ");
                scanf("%d", &aranan_id);
                id_oku(fptr, aranan_id);
                break;
            case 3:
                tek_sirali_kayit(fptr);
                break;
            case -1:
                printf("Programdan cikiliyor.\n");
                break;
            default:
                printf("Gecersiz secim, tekrar deneyin.\n");
                break;
        }
    } while (secim != -1); // secim -1 olana kadar dongu devam eder
    
    fclose(fptr); // acilan dosyayı kapattik
    return 0;
}

void veriOku(FILE* fptr) {
    struct Student student;
    fseek(fptr, 0, SEEK_SET); // dosyanin basina gidip basindan itibaren yazdirmaya basliyicaz
    while (fread(&student, sizeof(student), 1, fptr)) { // dosyadan tüm verileri okuyarak ekrana yazdırır
    //fread bu dosyada okunan öge sayısını döndürür 1 olarak eger deger 0 olursa zaten dosya sonuna gelmis olur ve dongu sonlanır
        printf("-----------------\n");
        printf("ID: %d\n", student.id);
        printf("Name: %s\n", student.name);
        printf("Surname: %s\n", student.surname);
        printf("Average: %d\n", student.average);
        printf("-----------------\n");
    }
}

void id_oku(FILE* fptr, int aranan_id) {
    struct Student student;
    int bulundu = 0; // ogrencinin aranan id'sinin bulunup bulunmadıgını gösteren degiskene basta 0 yani (false) degeri atadim
    fseek(fptr, 0, SEEK_SET); // dosyanın basina gidip kontole baslar
    while (fread(&student, sizeof(student), 1, fptr)) { //dosyadan okuma yapiyor
        if (student.id == aranan_id) { //student id'si kullanicinin girdigi id ile esitse ekrana ogrenci biligilerini yazar
            printf("-----------------\n");
            printf("ID: %d\n", student.id);
            printf("Name: %s\n", student.name);
            printf("Surname: %s\n", student.surname);
            printf("Average: %d\n", student.average);
            printf("-----------------\n");
            bulundu = 1; // ogrenci bulundugu icin 0 olan false degeri yerine 1 olan true degeri atanir
            break; // döngüyü sonlandırırız
        }
    }
    if (!bulundu) { // eger hala bulundu=0 ise, bulundunun degili demek
        printf("Aranan id'ye ait ogrenci bulunamadi.\n");
    }
}

void tek_sirali_kayit(FILE* fptr) {
    struct Student student;
    int kayit_numarasi = 0; //kayit numarasina basta 0 degeri atadım sonra tek tek arttırıp tek olanları bulmaya calisacagim
    
    fseek(fptr, 0, SEEK_SET); // dosyanın basina git
    while (fread(&student, sizeof(student), 1, fptr)) {
        if (kayit_numarasi % 2 != 0) { // Kayıt numarası tek olanları ekrana yazdır
            printf("-----------------\n");
            printf("ID: %d\n", student.id);
            printf("Name: %s\n", student.name);
            printf("Surname: %s\n", student.surname);
            printf("Average: %d\n", student.average);
            printf("-----------------\n");
        }
        kayit_numarasi++; 
    }
}
