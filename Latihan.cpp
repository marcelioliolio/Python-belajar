#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
int x, y;
int bunga;
cout << "Masukkan nominal deposito: ";
cin >> x;
cout << "Nominal masuk: " << x << '\n' << "Berapa lama anda menabung: ";
cin >> y;
if (y == 1) {
    cout << "Tabungan anda akan menjadi: " << x + x*0.1;
} else {
    cout << "Tabungan anda akan menjadi: " << x;
}
return 0;
}