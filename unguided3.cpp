#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map untuk menyimpan nama dan umur
    map<string, int> umur;

    // Menambahkan data ke dalam map
    umur["Ali"] = 20;
    umur["Budi"] = 22;
    umur["Charlie"] = 25;

    // Menampilkan umur
    cout << "Umur Ali: " << umur["Ali"] << endl;
    cout << "Umur Budi: " << umur["Budi"] << endl;
    cout << "Umur Charlie: " << umur["Charlie"] << endl;

    return 0;
}

