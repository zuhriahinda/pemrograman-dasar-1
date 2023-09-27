#include <stdio.h>

int main() {
    int jumlah_siswa;
    float tinggi_badan, total_tinggi = 0;

    printf("Masukkan jumlah siswa: ");
    scanf("%d", &jumlah_siswa);

    for (int i = 1; i <= jumlah_siswa; i++) {
        printf("Data tinggi badan siswa ke-%d: ", i);
        scanf("%f", &tinggi_badan);
        total_tinggi += tinggi_badan;
    }

    float rata_rata = total_tinggi / jumlah_siswa;

    printf("Rata-rata tinggi badan siswa adalah: %.2f\n", rata_rata);

    return 0;
}
