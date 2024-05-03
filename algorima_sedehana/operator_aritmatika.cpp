#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;
    int hasil;
    float hasil_float;

    // penjumlahan 
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    // perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;
    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;
    // float 
    hasil_float = 15.0 / 3.0;
    cout << a << " / " << b << " = " << hasil_float << endl;
    // modulus (sisa pembagian)
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

   
    hasil = 0;
    hasil++; // hasil = hasil + 1;
    cout << hasil << " + " << 1 << " = " << hasil << endl;
    hasil--; // hasil = hasil - 1;
    cout << 1 << " - " << 1 << " = " << hasil << endl;
    return 0;
}