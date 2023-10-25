#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jk;
    float bmi, tb, bb;

    // Menampilkan judul program
    printf("=======KALKULATOR BMI========\n");

    // Meminta input jenis kelamin
    printf("Masukkan Jenis Kelamin:\n");
    printf("1. Laki-Laki\n");
    printf("2. Perempuan\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &jk);

    // Validasi input jenis kelamin
    while (jk < 1 || jk > 2) {
        printf("Pilihan tidak valid. Silakan masukkan 1 atau 2.\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &jk);
    }

    // Meminta input tinggi badan dan berat badan
    do {
        printf("Masukkan Tinggi Badan (cm): ");
        scanf("%f", &tb);
        printf("Masukkan Berat Badan (kg): ");
        scanf("%f", &bb);

        // Validasi input tinggi badan dan berat badan
        if (tb <= 0 || bb <= 0) {
            printf("Tinggi Badan atau Berat Badan tidak boleh kurang dari nol\n");
        }
    } while (tb <= 0 || bb <= 0);

    // Menghitung BMI
    tb = tb / 100;
    bmi = bb / (tb * tb);

    // Menampilkan hasil BMI dan kategori berat badan
    switch (jk) {
        case 1:
            if (bmi >= 17 && bmi <= 23) {
                printf("BMI anda: %.2f\n", bmi);
                printf("Berat badan anda ideal\n");
            } else {
                printf("BMI anda: %.2f\n", bmi);
                printf("Berat badan anda tidak ideal\n");
            }
            break;
        case 2:
            if (bmi >= 18 && bmi <= 25) {
                printf("BMI anda: %.2f\n", bmi);
                printf("Berat badan anda ideal\n");
            } else {
                printf("BMI anda: %.2f\n", bmi);
                printf("Berat badan anda tidak ideal\n");
            }
            break;
    }

    return 0;
}
