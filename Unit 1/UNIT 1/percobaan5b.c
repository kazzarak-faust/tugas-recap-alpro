#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//output  : FADHEL FAUSTA
//perbedaannya adalah pada percobaan5a output nya hanya memiliki satu kata (FADHEL) dan pada percobaan5b outputnya memiliki lebih dari satu kata (FADHEL FAUSTA)