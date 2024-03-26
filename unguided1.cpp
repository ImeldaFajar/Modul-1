#include <iostream>
using namespace std;

float tambah(float num1, float num2) {
    return num1 + num2;
}


float kurang(float num1, float num2) {
    return num1 - num2;
}

int main() {
    char op;
    float num1, num2;

    cout << "Masukkan operator (+, -, ): ";
    cin >> op;

    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Hasil: " << tambah(num1, num2);
            break;
        case '-':
            cout << "Hasil: " << kurang(num1, num2);
            break;
       
        default:
            cout << "Error! Operator tidak benar";
    }

    return 0;
}
