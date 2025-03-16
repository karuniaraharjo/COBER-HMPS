// Buatlah program sistem parkir sederhana
// User menginputkan jenis kendaraan(motor/mobil/bus) & lama parkir(jam)
// Tarif parkir perjam -> Motor = 2.000 & Mobil = 5.0000 & Bus = 7.000
// jika kurang dari 1 jam, maka dihitung 1 jam
// jika kendaraan tidak sesuai maka tampilkan "Kendaraan tidak valid"
// output adalah total biaya parkir

#include <iostream>
using namespace std;

int main(){
    int kendaraan;
    int jam;
    int biaya;

    cout << "== Pilih jenis kendaraan ==\n";
    cout << "1. Motor\n2. Mobil\n3. Bus\n";
    cout << "Masukkan pilihan : ";
    cin >> kendaraan;
    cout << "lama parkir(jam) : ";
    cin >> jam;

    if(jam < 1) jam = 1;

    switch (kendaraan)
    {
    case 1:
        biaya = 2000 * jam;
        cout << "Total biaya parkir Rp." << biaya;
        break;
    case 2:
        biaya = 5000 * jam;
        cout << "Total biaya parkir Rp." << biaya;
        break;
    case 3:
        biaya = 7000 * jam;
        cout << "Total biaya parkir Rp." << biaya;
        break;
    default:
        cout << "Kendaraan tidak vald";
        break;
    }

    return 0;
}