#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x,int y);
void PrintFile(char file[], int x, int y);
void fullscreen();
int i, x, y;



void HalDashboard(){
    system("color 71");
    _sleep(300);
PrintFile("..//Tampilan//Dashboard.txt", 72, 16);
PrintFile("..//Tampilan//bis.txt", 72, 22);
gotoxy(0, 0);
printf("%c", 177);      //kiri atas
gotoxy(208, 0);
printf("%c", 177);      //kanan atas
gotoxy(208, 55);
printf("%c", 177);      //kanan bawah
gotoxy(0, 55);
printf("%c", 177);      //kiri bawah

for (x = 1;x <= 207; x++) {           //atas tengah
    gotoxy(x,0);
    printf("%c", 177);
}
    for (x = 1;x <= 207; x++) {           //atas tengah
        gotoxy(x,1);
        printf("%c", 177);
    }
for (y = 1;y <= 54; y++) {            //kiri tengah
    gotoxy(0,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kiri tengah
    gotoxy(1,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kanan tengah
    gotoxy(208,y);
    printf("%c", 177);
}
for (y = 1;y <= 54; y++) {            //kanan tengah
    gotoxy(207,y);
    printf("%c", 177);
}
for (x = 1;x <= 207; x++) {           //bawah tengah
    gotoxy(x,55);
    printf("%c", 177);
}
    for (x = 1;x <= 207; x++) {           //bawah tengah
        gotoxy(x,54);
        printf("%c", 177);
    }

    gotoxy(95, 35);
    printf("L O A D I N G . . . ");         //Loading

    for (x = 83; x <= 120; x++) {           //atas
        gotoxy(x, 37);
        printf("%c", 196);
    }
    for (x = 83; x <= 120; x++) {           //bawah
        gotoxy(x, 39);
        printf("%c", 196);
    }
    for (x = 83; x <= 120; x++) {           //isi
        _sleep(50);
        gotoxy(x, 38);
        printf("%c", 219);
    }
    gotoxy(89, 41);
    system("pause");
    system("cls");

}

void HalLogin() {
    system("color 71");
    // _sleep(200);

    PrintFile("..//Tampilan//login kanan.txt", 113, 5);
    PrintFile("..//Tampilan//login kiri.txt", 4, 5);
    gotoxy(32, 25);
    printf("1. Staff ");
    gotoxy(32, 27);
    printf("2. Owner ");
    gotoxy(36, 29);
    printf("{");
    gotoxy(38, 29);
    printf("}");


    gotoxy(0, 0);
    printf("%c", 177);      //kiri atas
    gotoxy(208, 0);
    printf("%c", 177);      //kanan atas
    gotoxy(208, 55);
    printf("%c", 177);      //kanan bawah
    gotoxy(0, 55);
    printf("%c", 177);      //kiri bawah

    for (x = 1;x <= 207; x++) {           //atas tengah
        gotoxy(x,0);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(0,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kiri tengah
        gotoxy(1,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(208,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {            //kanan tengah
        gotoxy(207,y);
        printf("%c", 177);
    }
    for (x = 1;x <= 207; x++) {           //bawah tengah
        gotoxy(x,55);
        printf("%c", 177);
    }


    for (y = 1;y <= 54; y++) {            //pembatas
        gotoxy(75,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(76,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(77,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(78,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(79,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(80,y);
        printf("%c", 177);
    }
    for (y = 1;y <= 54; y++) {
        gotoxy(81,y);
        printf("%c", 177);
    }

    //kotak username dan password
    gotoxy(125, 25);
    printf("Username: ");
    gotoxy(135, 26);
    printf("%c", 192);      //kiri bawah
    gotoxy(135, 24);
    printf("%c", 218);      //kiri atas
    gotoxy(161, 24);
    printf("%c", 191);      //kanan atas
    gotoxy(161, 26);
    printf("%c", 217);      //kanan bawah
    gotoxy(135, 25);
    printf("%c", 179);  //kiri tengah
    gotoxy(161, 25);
    printf("%c", 179);  //kanan tengah
    for (x = 136;x <= 160; x++) {    //atas
        gotoxy(x,24);
        printf("%c", 196);
    }
    for (x = 136;x <= 160; x++) {    //bawah
        gotoxy(x,26);
        printf("%c", 196);
    }

    gotoxy(125, 28);
    printf("Password: ");
    gotoxy(135, 29);
    printf("%c", 192);      //kiri bawah
    gotoxy(135, 27);
    printf("%c", 218);      //kiri atas
    gotoxy(161, 27);
    printf("%c", 191);      //kanan atas
    gotoxy(161, 29);
    printf("%c", 217);      //kanan bawah
    gotoxy(135, 28);
    printf("%c", 179);  //kiri tengah
    gotoxy(161, 28);
    printf("%c", 179);  //kanan tengah
    for (x = 136;x <= 160; x++) {    //atas
        gotoxy(x,27);
        printf("%c", 196);
    }
    for (x = 136;x <= 160; x++) {    //bawah
        gotoxy(x,29);
        printf("%c", 196);
    }
}

#ifndef DESIGN_H
#define DESIGN_H

#endif //DESIGN_H
