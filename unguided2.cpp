#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;

public:
    void setNama(string nm) {
        nama = nm;
    }
    void setUmur(int um) {
        umur = um;
    }
    void display() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
    }
};
int main() {
    Mahasiswa mhs1;
    mhs1.setNama("Ali");
    mhs1.setUmur(20);
    mhs1.display();
    
    return 0;
}
