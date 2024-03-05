#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

/*program tersebut adalah program looping yang terdiri dari 2 variabel i dan j pada fungsi main.
kondisi perulangan while adalah untuk i <=3, jadi looping akan terus terjadi selama i kuarng dari sama dengan 3.
pada looping kedua digunakan untuk melakukan perulangan j dari 1 ke 2. kondisi perulangannya adalah untuk j <=2, jadi looping akan terus terjadi selama j kuarng dari sama dengan 2.
pada perulangan yang didalam akan mencetak niali i dan j, dan menghitung hasil kali dari j dan i lalu mencetaknya.
saat looping pada bagian dalam selesai nilai j akan bertambah 1, dan looping akan terus berlanjuy sampai looping pada bagian luar tidak memenuhi kondisi.
ketika looping bagian luar selesai, nilai dari i akan bertambah 1 dan looping akan berjalan kembali.
*/