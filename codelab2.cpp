#include <stdio.h>

int main() {
    int apples = 5, bananas = 8; // Tambahkan tipe data int sebelum variabel
    float orangePrice = 15, bananaPrice = 0.75; // Tambahkan tipe data float sebelum variabel

    char currency = '$'; // Tambahkan tipe data char sebelum variabel
    float totalCost = (apples * orangePrice) + (bananas * bananaPrice); // Mengubah operator * (perkalian) dan menambahkan kurung

    printf("Jumlah apel: %d\n", apples); // Menambahkan variabel apples ke dalam printf
    printf("Jumlah pisang: %d\n", bananas); // Menambahkan variabel bananas ke dalam printf

    printf("Harga jeruk per buah: %.2f %c\n", orangePrice, currency); // Menggabungkan harga dan mata uang
    printf("Harga pisang per buah: %.2f %c\n", bananaPrice, currency); // Menggabungkan harga dan mata uang

    printf("Total biaya: %.2f %c\n", totalCost, currency); // Menggabungkan total biaya dan mata uang

    return 0;
}
