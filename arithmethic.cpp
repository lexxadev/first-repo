#include <iostream>

using namespace std;

int main()
{
    int a; // Ubah salah satu sintaks 'int' menjadi 'float' untuk melakukan pembagian.
    int b;

    int hasil; // Ubah sintaks 'int' menjadi 'float' untuk melakukan pembagian, ubah kembali jika ingin menggunakan operasi perhitungan lain.
    
    cout << "Input nilai : ";
    cin >> a;

    cout << "Input nilai sekali lagi : ";
    cin >> b; 

    hasil = a + b; // Gunakan simbol aritmatika seperti "+" , "-" , "/" , "*" , "%" untuk menjalankan program. Penjelasan lebih lengkap mengenai simbol dapat dilihat di file 'readme.md'. 

    cout << "hasil dari perhitungan tersebut adalah : " << hasil << endl;

    cin.get();
    return 0;
}

