#include <iostream>

using namespace std;


int main () {

    float x, y, result;
    char mathSymbol;

    cout << "===============================" << endl;

    cout << "Masukan angka : "; // Masukan angka yang diinginkan 
    cin >> x;

    cout << "Pilih operasi perhitungan : "; // Pilih salah satu operasi perhitungan seperti "+, -, *, /, %"
    cin >> mathSymbol;

    cout << "Masukan angka sekali lagi : ";
    cin >> y;

    switch (mathSymbol) {

        case '+': 
        result = (x + y);
        cout << x << " + " <<  y  << " = " << result << endl; 
        break; 

        case '-':
        result = (x - y);
        cout << x << " - " <<  y  << " = " << result << endl; 
        break;

        case '*':
        result = (x * y);
        cout << x << " x " <<  y  << " = " << result << endl; // Gunakan " * " untuk menggunakan operasi perkalian
        break; 

        case '/':
        result = (x / y);
        cout << x << " : " <<  y  << " = " << result << endl; // gunakan " / " untuk menggunakan operasi pembagian
        break;

        case '%':
        result = result = static_cast<int>(x) % static_cast<int>(y); // Gunakan " % " untuk menggunakna operasi modulus
        cout << x << " % " <<  y  << " = " << result << endl; 
        break;

        default :
        cout << "Operasi perhitungan tidak valid!" << endl;
    
    }

    cout << "=================================" << endl;

    return 0;
}
