#include <stdio.h>

int jumlah, transaksi, total;
int i;


int main() {
   printf("jumlah transaksi :\n");
   scanf("%d", &jumlah);

   if (jumlah <= 0) {
    printf("tidak ada transaksi");}
    
    printf("nominal transaksi :\n");
    for (i= 1; i<= jumlah; i++) {
        scanf("%d", &transaksi);
        total = total + transaksi;
    }

    printf("total pengeluaran hari ini: %d\n", total);
   
    
    return 0;
}