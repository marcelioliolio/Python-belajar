#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int p = 10;
    p += 5;
    cout << p << '\n';

    // Logical Operators
    int x = 9;
    int y = 4;
    cout << (x > 9 || x == 18) << '\n';
    cout << (x > 8 && x <= 10) << '\n';

    // Strings
    string kata = "qwertyuiop";
    cout << "The length of the text is: "<< kata.length() << '\n';

    string hula = "Halo";
    hula[0] = 'V';
    cout << hula << '\n';

    string cuba = "It\'s fine";
    cout << cuba << '\n';

    string nama;
    cout << "Nama panjang: ";
    //getline(cin, nama);
    cout << "Nama anda adalah " << nama << '\n';

    // Math
     cout << max(19, 200) << '\n';
     cout << min(-4, 394) << '\n';

     cout << sqrt(81) << '\n';
     cout << round(77.8) << '\n';
     cout << log(9) << '\n';

    // Bool True|False
    bool benar = true;
    bool salah = false;
    cout << benar << '\n';
    cout << salah << '\n';

    int m = 910;
    int n = 88;
    cout << (m>n)<<'\n';
    cout << (99 == 98)<<'\n';

    // Conditions
    int umurPeserta = 21;
    int batasUmur = 18;
    cout << (umurPeserta == batasUmur) << '\n';
    
    if (umurPeserta >= batasUmur) {
        cout << "Anda berhak memilih!";
    } else if (umurPeserta > batasUmur){
        cout << "Anda boleh memilih";
    } else {
        cout << "Belum cukup umur!" << '\n';
    }

    int waktu = 23;
    string result = (waktu < 20) ? "Good Day!" : "Good Night!";
    cout << result;


    return 0;
    
}