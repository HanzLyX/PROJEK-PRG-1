#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
// #include "..//Tampilan//Dashboard.txt"

void gotoxy(int x, int y) {
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}


void setClearArea(int x,int y,int lebar, int tinggi) {
    int  o = 0;
    for (int i = y; i <tinggi+y; ++i) {
        gotoxy(x,y+o);
        for (int j = x; j < lebar+x; ++j) {
            printf(" ");
        }
        printf("\n");
        o++;
    }
}

void PrintFile(char file[], int x, int y){
    FILE *Text;
    char Data[200];
    if((Text=fopen(file, "r")) == NULL){
        system("cls");
    }
    while(fgets(Data, 200, Text))
    {
        gotoxy(x, y);
        printf("%s", Data);
        y++;
    }
    fclose(Text);
}

void gotoPrintChar(int x,int y,char decimal) {
    gotoxy(x,y);
    printf("%c",decimal);
}


typedef struct {
    char username[50];
    char password[50];
}pelanggan;

 pelanggan cust;

void fullscreen(){
    keybd_event(VK_MENU,0x38,0,0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}


void user() {

    // printf("=====Tabel Pengisian User=====");
    // setClearArea(49, 10, 31, 5);

    FILE *Data, *temp;

    // PrintFile("gambar.txt", 20, 30);
    //system ("color zz");    //(color zz) untuk melihat kode warna
    int pilihan;
    

    // system("color 02");
    // _sleep(300);



    do {
    // system("color 07");

        // setClearArea(49, 10, 31, 5);
        gotoxy(90,40);
    printf("Silahkan Memilih List: ");
        gotoxy(90,41);
        printf("1. Buat Pesanan Pelanggan");
        gotoxy(90,42);
        printf("Masukan Pilihan: ");

        gotoxy(107,42);
        scanf("%d",&pilihan);
        fflush(stdin);

        setClearArea(90, 40, 60, 5);

        switch(pilihan) {
            case 1:
                // setClearArea(49, 10, 31, 5);

            Data = fopen("user.dat", "wb");
            gotoxy(90,40);
            printf("[Input Pembuatan Akun User]");

            gotoxy(90,41);
                printf("Masukkan Username: ");
                gets(&cust.username);
            gotoxy(90,42);
                printf("Masukkan Password: ");
                gets(&cust.password);
            fwrite(&cust, sizeof(cust), 1, Data);

            fclose(Data);
            gotoxy(90,43);
            printf("Pembuatan Akun Baru Berhasil!");
            gotoxy(90,44);
            system("pause");
            setClearArea(90, 40, 50, 5);


            break;
            case 6 :
                // setClearArea(49, 10, 31, 5);

            Data = fopen("user.dat", "rb");
            printf("\n\n============[[Detail Output]]============\n");
            while(fread(&cust,sizeof(cust),1,Data)) {
                printf("\nUsername : %s", cust.username);
                printf("\nPassword : %s", cust.password);
            }
            fclose(Data);
            break;
        }
    }while(pilihan !=8);
    printf("\n!!!Keluar Dari Data Buku!!! \n=====[[Terima Kasih]]=====");

    getch();
}


#ifndef USER_H
#define USER_H

#endif //USER_H
