//Buatlah Program untuk mencetak deret bilangan ganjil
// #include <iostream>
// using namespace std;

// int main(){
//     int deret;

//     cout << "masukkan jumlah deret : ";
//     cin >> deret;

//     for (int i = 1; i < deret*2; i+=2)
//     {
//         cout << i << " ";
//     }
    
//     return 0;
// }


//Buatlah program untuk menjumlahkan bilangan yang diinput pengguna
//jika input 0 maka program berhenti
// #include <iostream>
// using namespace std;

// int main() {
//     int angka, total = 0;

//     while (angka != 0) {
//         total += angka;
//         cout << "Masukkan angka (0 untuk berhenti): ";
//         cin >> angka;
//     }

//     cout << "Total jumlah angka: " << total << endl;
//     return 0;
// }


//Buatlah program login yang akan meminta username & password
//jika username & password salah maka program akan terus meminta login
//Jika benar maka output "Login Sukses"
#include <iostream>
using namespace std;

int main() {
    string username,password;
    string user = "admin", pass = "pw";
    do {
        cout << "=====CO-BER LOGIN=====\n";
        cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;

        if (username == user && password == pass) {
            cout << "Login Sukses\n";
        }
    } while (username != user || password != pass);
    return 0;
}
