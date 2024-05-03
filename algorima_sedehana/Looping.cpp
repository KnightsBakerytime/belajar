#include<iostream>
using namespace std;

int main(){
    // while 
    cout << "Loogin menggunakan While" << endl;
    int nomer_urut = 1;
    while(nomer_urut <= 10){
        cout << nomer_urut << endl;
        nomer_urut++;
    }
    cout << "Loogin menggunakan do" << endl;
    int j = 0;
    do {
        j++;
        cout << j << endl;
    }while(j < 10);
    cout << "Loogin menggunakan for" << endl;
    for(int k = 1 ; k < 6 ; k++){
        cout << k << endl;
    }
    cout << "Loogin menggunakan singkatan for" << endl;
    char arr[] = {'a','b','c','d','e'};
    for(int elem : arr ){
        cout << elem << endl;
    }
    return 0;
}