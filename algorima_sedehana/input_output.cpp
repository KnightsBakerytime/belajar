#include<iostream>
using namespace std;

int main(){
    char nama[35];
    cout << "Belajar Menggunakan input output pada C++ \n" << endl;
    cout << "Masukan nama anda : " ;
    cin.getline(nama,35);

    // Balasan dari komputer 
    cout << "Hello , " << nama << endl;
    cout << "Selamat Kamu sudah paham menggunakan getLine" << endl;
    return 0;
}