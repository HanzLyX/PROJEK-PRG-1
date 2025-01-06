 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "Master/User.h"
#include "Master/Design.h"
#include "Master/Role.h"
// #include "Master/Admin.h"

#define ENTER 13
#define BACKSPACE 8


void scanInputPassword(char text[50]) {
    char ch;
    int i = 0;

    while (1) {

        ch = getch();
        if (ch == ENTER ) {
            text[i] = '\0';
            break;
        }if(ch == BACKSPACE) {

            i--;
            printf("\b \b");
        }
        else{
            text[i] = ch;
            printf("*");
            i++;
        }

    }
    printf("\n%s\n",text);
}

main(){

    fullscreen();
    Sleep(200);
    // system("color 70");

    // user();
    // iniKasir();
    //iniAdmin();
    // char text[50];
    // scanInputPassword(text);
    HalDashboard();
    HalLogin();
    getch();
}

