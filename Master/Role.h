#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
// #include "Master/User.h"


typedef struct {
    char namaKasir[50];
    int  idKasir;
    char kasirId[50];
    char passwordKsr[50];
    int jumlah;
    char Idtiket[50];
    char namaPelanggan[50];
} kasir;

typedef struct {
    char idBuku[50];
    char nama[50];
    char Penerbit[50];
    char tahunTerbit[50];
    char Penulis[50];
}buku;

typedef struct {
    char username[20];
    char password[20];
}min;

min adm;

buku book;

FILE *Data, *temp;

kasir ksr;

void iniAdmin() {
    int jumlah;
    system("cls");

    // fullscreen();

    // PrintFile("gambar.txt", 20, 30);
    //system ("color zz");    //(color zz) untuk melihat kode warna
    int menu = 1;
    int pilihan;
    char cariId[50];

    system("cls");
    do {
        _beep(500,200);
        _sleep(500);
        printf("\n\n==================================\nSilahkan Memilih List: \n1.Admin \n2.Update Nama Penerbit \n3.Update Tahun Terbit \n4.Update Nama Penulis \n5.Hapus Id Buku \n6.Tampilkan Data \n7.Menambah Buku \n8.Exit",
            menu == 1 ? "->" : " ", menu == 2 ? "->" : " ", menu == 3 ? "->" : " ", menu == 4 ? "->" : " ", menu == 5 ? "->" : " ", menu == 6 ? "->" : " ", menu == 7 ? "->" : " ", menu == 8 ? "->" : " ");

        printf("\nMasukan Pilihan: ");
        scanf("%d",&pilihan);
        fflush(stdin);

        switch(pilihan) {
            case 1:
                system("cls");
            Data = fopen("admin.dat", "rb");
            temp = fopen("admin.dat", "wb");
            printf("Masukan Username: ");
            gets(adm.username);
            printf("Masukan Password: ");
            gets(adm.password);
                if((strcmp(adm.username,"Admin")==0) && (strcmp(adm.password,"Admin")==0)) {
                    printf("Anda Masuk Sebagai Admin :D");
                    user();
                }
                else {
                    printf("Masukan Password dan Username dengan benar!!!");
                }

            fclose(Data);
            fclose(temp);

            Data = fopen("data.dat", "wb");
            temp = fopen("temp.dat", "rb");
            while(fread(&book,sizeof(book),1,temp)) {
                fwrite(&book,sizeof(book),1,Data);
            }
            fclose(Data);
            fclose(temp);
            break;
            case 2:
                system("cls");
            Data = fopen("data.dat", "rb");
            temp = fopen("temp.dat", "wb");
            printf("\nMasukkan ID Buku yang di cari: ");
            gets(&cariId);
            while(fread(&book,sizeof(book),1,Data)) {
                if(strcmp(book.idBuku,cariId)==0) {
                    printf("Masukkan Nama Penerbit Baru : ");
                    scanf(" %[^\n]%*c",&book.Penerbit);
                    fwrite(&book,sizeof(book),1,temp);
                    printf("\nNama Penerbit Buku Baru Berhasil Ditambahkan!!!");
                }
                else {
                    fwrite(&book,sizeof(book),1,temp);
                }
            }
            fclose(Data);
            fclose(temp);

            Data = fopen("data.dat", "wb");
            temp = fopen("temp.dat", "rb");
            while(fread(&book,sizeof(book),1,temp)) {
                fwrite(&book,sizeof(book),1,Data);
            }
            fclose(Data);
            fclose(temp);
            break;
            case 3:
                system("cls");
            Data = fopen("data.dat", "rb");
            temp = fopen("temp.dat", "wb");
            printf("\nMasukkan ID Buku yang di cari: ");
            gets(&cariId);
            while(fread(&book,sizeof(book),1,Data)) {
                if(strcmp(book.idBuku,cariId)==0) {
                    printf("Masukkan Tahun Buku Baru : ");
                    scanf(" %[^\n]%*c",&book.tahunTerbit);
                    fwrite(&book,sizeof(book),1,temp);
                    printf("\nTahun Buku Baru Berhasil Ditambahkan!!!");
                }
                else {
                    fwrite(&book,sizeof(book),1,temp);
                }
            }
            fclose(Data);
            fclose(temp);

            Data = fopen("data.dat", "wb");
            temp = fopen("temp.dat", "rb");
            while(fread(&book,sizeof(book),1,temp)) {
                fwrite(&book,sizeof(book),1,Data);
            }
            fclose(Data);
            fclose(temp);
            break;
            case 5:
                system("cls");
            Data = fopen("data.dat", "rb");
            temp = fopen("temp.dat", "wb");
            printf("\nMasukkan ID Buku yang di cari: ");
            gets(&cariId);
            while(fread(&book,sizeof(book),1,Data)) {
                if(strcmp(book.idBuku,cariId)!=0) {
                    fwrite(&book,sizeof(book),1,temp);
                }
            }
            if(strcmp(book.idBuku,cariId)==0) {
                printf("Id Buku Berhasil Dihapus!!!");
            }
            else {
                printf("Id Buku Tidak Valid!!! \nHarap Masukan Id Buku Yang Ada:D");
            }
            fclose(Data);
            fclose(temp);

            Data = fopen("data.dat", "wb");
            temp = fopen("temp.dat", "rb");
            while(fread(&book,sizeof(book),1,temp)) {
                fwrite(&book,sizeof(book),1,Data);
            }
            fclose(Data);
            fclose(temp);
            break;
            case 4:
                system("cls");
            Data = fopen("data.dat", "rb");
            temp = fopen("temp.dat", "wb");
            printf("\nMasukkan ID Buku yang di cari: ");
            gets(&cariId);
            while(fread(&book,sizeof(book),1,Data)) {
                if(strcmp(book.idBuku,cariId)==0) {
                    printf("Masukkan Nama Penulis Buku Baru : ");
                    scanf(" %[^\n]%*c",&book.Penulis);
                    fwrite(&book,sizeof(book),1,temp);
                    printf("\nNama Penulis Buku Baru Berhasil Ditambahkan!!!");
                }
                else {
                    fwrite(&book,sizeof(book),1,temp);
                }
            }
            fclose(Data);
            fclose(temp);

            Data = fopen("data.dat", "wb");
            temp = fopen("temp.dat", "rb");
            while(fread(&book,sizeof(book),1,temp)) {
                fwrite(&book,sizeof(book),1,Data);
            }
            fclose(Data);
            fclose(temp);
            break;
            case 6 :
                system("cls");
            Data = fopen("data.dat", "rb");
            printf("\n\n============[[Detail Output]]============\n\n");
            while(fread(&book,sizeof(book),1,Data)) {
                printf("\nID Buku: %s", book.idBuku);
                printf("\nNama Buku: %s", book.nama);
                printf("\nPenerbit Buku: %s", book.Penerbit);
                printf("\nTahun Terbit Buku: %s", book.tahunTerbit);
                printf("\nPenulis Buku: %s\n", book.Penulis);
            }
            fclose(Data);
            break;
            case 7:
                system("cls");
            Data = fopen("data.dat", "ab");
            printf("\n[Input Penambahan Buku] \nMasukkan Jumlah Buku: ");
            scanf("%d",&jumlah);
            fflush(stdin);
            for(int i=1;i<=jumlah;i++) {
                printf("\nMasukkan ID Buku: ");
                gets(&book.idBuku);
                printf("Masukkan Nama Buku: ");
                gets(&book.nama);
                printf("Masukkan Penerbit Buku: ");
                gets(&book.Penerbit);
                printf("Masukkan Tahun Terbit Buku: ");
                gets(&book.tahunTerbit);
                printf("Masukkan Penulis Buku: ");
                gets(&book.Penulis);
                fwrite(&book, sizeof(book), 1, Data);
            }
            fclose(Data);
        }
    }while(pilihan !=8);
    printf("\n!!!Keluar Dari Data Buku!!! \n=====[[Terima Kasih]]=====");
}


//void iniKasir() {
//    FILE *Data, *Temp;
//
//    printf("======== -->[[LOGIN SEBAGAI KASIR]]<- ========\n\n");
//
//    printf("...->Pembelian Tiket Pelanggan<-...\n");
//    Data = fopen("kasir.dat", "wb");
//    printf("Berapa Jumlah Tiket : ");
//    scanf("%d", &ksr.jumlah);
//
//    for (int i = 1; i <= ksr.jumlah; i++) {
//        printf("Masukan Nama Pelanggan : ");
//        scanf("%s", &ksr.namaKasir);
//        printf("Masukan Id Pelanggan : ");
//    }
//
//    getch();
//}

#ifndef KASIR_H
#define KASIR_H

#endif //KASIR_H
