#include <stdio.h>

int main() {
    int a = 12, b = 28; // Tambahkan tanda koma antara a dan b
    float c = 2.5, d = 8.9; // Tambahkan tanda koma antara c dan d
    double e = 'R'; // Mengubah 'R' menjadi nilai numerik jika diperlukan

    // (tambahkan komentar disini)
    int sum = a + (b + c) - d;

    printf("Bilangan a: %d\n", a);
    printf("Bilangan b: %d\n", b); // Mengganti "prints" menjadi "printf"
    printf("Bilangan c: %.2f\n", c); // Mengganti "d" menjadi "c"
    printf("Bilangan d: %.2f\n", d);

    printf("Karakter e: %c\n", (char)e); // Mengubah format output karakter dan mengubah "&c" menjadi "%c"
    printf("Hasil: %.2f\n", (double)sum); // Mengubah "double" menjadi "(double)sum" dan menambahkan format "%.2f"

    return 0;
}
