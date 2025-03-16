// Buatkan program kalkulator sederhana
// Bisa penjumlahan, pengurangan, perkalian, dan pembagian 2 bilangan
// Ada tampilan menu kalkulator
#include <iostream>
using namespace std;

// Fungsi untuk operasi matematika
double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
        return 0;
    }
}

// Prosedur untuk menampilkan menu
void tampilkanMenu() {
    cout << "=== Kalkulator Sederhana ===\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Pilihan: ";
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;

    tampilkanMenu();
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= 4) {
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        switch (pilihan) {
            case 1: hasil = tambah(angka1, angka2); break;
            case 2: hasil = kurang(angka1, angka2); break;
            case 3: hasil = kali(angka1, angka2); break;
            case 4: hasil = bagi(angka1, angka2); break;
        }

        cout << "Hasil: " << hasil << endl;
    } else {
        cout << "Pilihan tidak valid. Silakan coba lagi.\n";
    }
    
    return 0;
}
