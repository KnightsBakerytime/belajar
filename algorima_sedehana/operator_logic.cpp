#include<iostream>
using namespace std;

int main(){
    // operator and (&)
    bool a = true;
    bool b = false;
    bool hasil;

    hasil = a && b;
    cout << "hasil true ketemu dengan false dengan simbol and (&) adalah : " << boolalpha << hasil << endl;

    // operator or ( || )
    hasil = (a || b);
    cout << "hasil true ketemu dengan false dengan simbol or ( | ) adalah : " << boolalpha << hasil << endl;
    // kebalikan  (!)
    hasil = !a;
    cout << "hasil true ketemu dengan ! :  " << boolalpha << hasil << endl;

    // tanda besar dan kecil
    int c = 2;
    int d = 2;
    hasil = (c < d);
    cout << "Apakah A kecil (<) dari B : " << boolalpha << hasil << endl;
    hasil = (c > d);
    cout << "Apakah A Besar (>) dari B : " << boolalpha << hasil << endl;
    hasil = (c <= d);
    cout << "Apakah A kecil sama dengan (<=) dari B : " << boolalpha << hasil << endl;
    hasil = (c >= d);
    cout << "Apakah A kecil sama dengan (>=) dari B : " << boolalpha << hasil << endl;
    hasil = (c == d);
    cout << "Apakah A sama dengan (==) B : " << boolalpha << hasil << endl;
    return 0;
}