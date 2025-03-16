// Buat program yang memungkinkan pengguna memasukkan nilai mahasiswa sebanyak N (ditentukan oleh pengguna), 
// lalu menghitung rata-rata, nilai tertinggi, dan nilai terendah menggunakan array.
#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    int nilai[N];

    for (int i = 0; i < N; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    int total = 0;
    int maxNilai = nilai[0];
    int minNilai = nilai[0];

    for (int i = 0; i < N; i++) {
        total += nilai[i];

        if (nilai[i] > maxNilai) {
            maxNilai = nilai[i];
        }

        if (nilai[i] < minNilai) {
            minNilai = nilai[i];
        }
    }

    double rataRata = (double)total / N;

    cout << "\n=== Hasil Pengolahan Nilai ===\n";
    cout << "Rata-rata Nilai: " << rataRata << endl;
    cout << "Nilai Tertinggi: " << maxNilai << endl;
    cout << "Nilai Terendah : " << minNilai << endl;

    return 0;
}
