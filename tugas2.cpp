#include <stdio.h>


typedef struct {
    int x,y,z;
} Titik3D;

int main() {
    Titik3D titik1, titik2;
    printf("Masukkan koordinat titik 1:\n");
    printf("x: "); scanf("%d", &titik1.x);
    printf("y: "); scanf("%d", &titik1.y);
	printf("z: "); scanf("%d", &titik1.z);
    printf("Masukkan koordinat titik 2:\n");
    printf("x: "); scanf("%d", &titik2.x);
    printf("y: "); scanf("%d", &titik2.y);
    printf("z: "); scanf("%d", &titik2.z);
	printf("Terbentuk garis dari titik (%d, %d, %d) ke titik (%d, %d, %d)\n", titik1.x, titik1.y, titik1.z, titik2.x, titik2.y, titik2.z);

    return 0;
}
