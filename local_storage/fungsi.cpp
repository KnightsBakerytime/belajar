#include<iostream>
using namespace std;

// void
// char A / B / C;
void cetak_nilai(int nomer,string nama){
    cout << "table data :\n" << endl;
    cout << " no \t| nama \t" << endl;
    cout << " " << nomer << " \t| " << nama  << endl;
}
// tipe data
int penjumlahan(int a , int b){
    int hasil = a + b;
    return hasil;
}

int main(){
    // pemanggilannya 
    int panggil_function_int = penjumlahan(1,3);
    cetak_nilai(1,"testing");
    cout << "Hasil dari function penjumlahan " << panggil_function_int << endl;
    return 0;   
}