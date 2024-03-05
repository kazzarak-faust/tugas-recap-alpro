#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

//output  : FADHEL
//perbedaannya adalah pada percobaan5a output nya hanya memiliki satu kata (FADHEL) dan pada percobaan5b outputnya memiliki lebih dari satu kata (FADHEL FAUSTA)