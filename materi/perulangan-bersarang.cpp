//Buatlah program segitiga angka dengan input jumlah baris
// input = 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; 
    }

    return 0;
}
