#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

/*code ini merupakan looping yang terdiri outer loop dan inner loop. outer loop terdiri dari 2 variabel i dan j. looping dimulai dengan i=2 dan bertambah 1 sampai i kurang dari sama dengan 3. 
dan inner loop terdiri dari 2 variabel yaitu j dan j. looping dimaulai dengan j = 1 dan bertambah sampai j kurang dari sama dengan 2.
pada inner loop code mencetak niali j, diikuti oleh nilai i, selanjutnya mencetak hasil dari perkalian j dan i.
program ini adalah untuk menghitung bilangan faktorial.*/