#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    // if 
    // if (operator_logic)
    if( a > b ){
        cout << "if kondisi terpenuhi" << endl;
    }
    // if else 
    if( a < b){
        cout << "if else kondisi if terpenuhi" << endl;
    }else{
        cout << "if else kondisi else terpenuhi" << endl;
    }
    // ternery
    bool hasil_bool = ( a > b ) ? true : false;
    // options atau switch 
    char options = 'A';
    switch(options){
        case 'A' : 
            cout << "A" << endl;
        break;
        case 'B' : 
            cout << "A" << endl;
        break;
        default:
            cout << "Data tidak di temukan " << endl;
        break;
    }

    return 0;
}