#include<iostream>
using namespace std;

int main(){
    // bilangan bulat (integer)
    int integerNumber  = 10;
    short shortNumber = 5;
    long longNumber = 1234567890;
    long long verLongNumber = 9876543210;

    // bilang desimal (Float)
    float floatNumber = 3.14f;
    double doubleNumber = 2.71828;
    long double longDoubleNumber = 1.61803398875;


    // Tipe data Char atau huruf;
    char charVariable = 'A';

    // tipe data kondisi atau kebenaran Boolean
    // true (1) atau false(0/null,NaN)
    bool boolVariable = true;

    cout << "Integer \t\t:" << integerNumber << endl;
    cout << "short \t\t:" << shortNumber << endl;
    cout << "long \t\t:" << longNumber << endl;
    cout << "Long long \t\t:" << verLongNumber << endl;

    cout << "Float \t\t:" << floatNumber << endl;
    cout << "Double \t\t:" << doubleNumber << endl;
    cout << "Long Double \t\t:" << longDoubleNumber << endl;

    cout << "Tipe Data char \t\t:" << charVariable << endl;

    cout << "Tipe Data Boolean \t\t:" << boolalpha << boolVariable << endl;
   
   
    



    return 0;
}