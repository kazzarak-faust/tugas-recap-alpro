#include <stdio.h>

int t, v, s;
float kecepatan, jarak, waktu;


int main() {
    printf("Perhitungan kecepatan\n");
    printf("masukan jarak: \n");
    scanf("%d",&s);
    printf("masukan waktu: \n");
    scanf("%d",&t);
    
    float kecepatan = s / t;

    printf("hasilnya adalah ");
    printf("%.2f \n \n", kecepatan);



    printf("Perhitungan jarak\n");
    printf("masukan kecepatan: \n");
    scanf("%d",&v);
    printf("masukan waktu: \n");
    scanf("%d",&t);
    
    float jarak = v * t;

    printf("hasilnya adalah ");
    printf("%.2f \n \n", jarak);



    printf("Perhitungan waktu\n");
    printf("masukan jarak: \n");
    scanf("%d",&s);
    printf("masukan kecepatan: \n");
    scanf("%d",&v);
    
    float waktu = s / v;

    printf("hasilnya adalah ");
    printf("%.2f \n \n", waktu);
    
    return 0;
}