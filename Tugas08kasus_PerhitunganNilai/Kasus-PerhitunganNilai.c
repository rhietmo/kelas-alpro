#include <stdio.h>
#include <string.h>

// Fungsi untuk menghitung nilai akhir berdasarkan komponen nilai
int calcNilai(int tugas, int quiz, int UTS, int UAS) {
  int nilaiAkhir = (tugas * 10 + quiz * 20 + UTS * 30 + UAS * 40) / 100;
  return nilaiAkhir;
}

// Fungsi untuk menampilkan nama, NIM, nilai akhir, huruf mutu, dan keterangan lulus/tidak lulus
void displayNilaiAkhir(char nama[], char NIM[], int nilaiAkhir) {
  char hurufMutu;
  char keterangan[20];

  // Konversi nilai akhir ke huruf mutu
  if (nilaiAkhir > 90) {
    hurufMutu = 'A';
  } else if (nilaiAkhir >= 81 && nilaiAkhir <= 90) {
    hurufMutu = 'B';
  } else if (nilaiAkhir >= 71 && nilaiAkhir <= 80) {
    hurufMutu = 'C';
  } else if (nilaiAkhir >= 61 && nilaiAkhir <= 70) {
    hurufMutu = 'D';
  } else if (nilaiAkhir >= 51 && nilaiAkhir <= 60) {
    hurufMutu = 'E';
  } else if (nilaiAkhir >= 45 && nilaiAkhir <= 50) {
    hurufMutu = 'F';
  } else {
    hurufMutu = 'G';
  }

  // Tentukan keterangan lulus/tidak lulus
  if (hurufMutu == 'A' || hurufMutu == 'B' || hurufMutu == 'C') {
    strcpy(keterangan, "Lulus");
  } else {
    strcpy(keterangan, "Tidak Lulus");
  }

  // Tampilkan output
  printf("Nama: %s\n", nama);
  printf("NIM: %s\n", NIM);
  printf("Nilai Akhir: %d\n", nilaiAkhir);
  printf("Huruf Mutu: %c\n", hurufMutu);
  printf("Keterangan: %s\n", keterangan);
}

// Fungsi utama
int main() {
  // Deklarasi variabel
  char nama[50];
  char NIM[20];
  int tugas, quiz, UTS, UAS, nilaiAkhir;

  // Input data mahasiswa
  printf("Masukkan nama mahasiswa: ");
  gets(nama);
  printf("Masukkan NIM mahasiswa: ");
  gets(NIM);
  printf("Masukkan nilai tugas: ");
  scanf("%d", &tugas);
  printf("Masukkan nilai quiz: ");
  scanf("%d", &quiz);
  printf("Masukkan nilai UTS: ");
  scanf("%d", &UTS);
  printf("Masukkan nilai UAS: ");
  scanf("%d", &UAS);

  // Panggil fungsi untuk menghitung nilai akhir
  nilaiAkhir = calcNilai(tugas, quiz, UTS, UAS);

  // Panggil fungsi untuk menampilkan nilai akhir
  displayNilaiAkhir(nama, NIM, nilaiAkhir);

  return 0;
}