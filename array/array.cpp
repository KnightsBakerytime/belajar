#include<iostream>
using namespace std;
// deklarai nama function
void cetak_nilai(int arr[],int size);
int main(){
    
    // mendeinisikan array dengan ukuran tertentu
    const int size = 10;
    int number[size] = {1,2,3,4,5,6,7,8,9,10};

    // cara memanggilnya 
    // varaibel[poisinya]
    cetak_nilai(number,size);
    // update nilai
    // posisi itu di mulai dari 0
    number[3] = 40;
    cout << "Setelah nilai ke 3 di update berapakah nilai ke 3 : " << number[3] << endl;
    cetak_nilai(number,size);

    number[size - 2 ] = number[size - 2 ] ;
    cout << "Setelah nilai ke 9 di update berapakah nilai ke 9 : " << number[9] << endl;
    cetak_nilai(number,size);
   return 0;
}

void cetak_nilai(int arr[],int size){
    cout << "Nilai yang ada pada array : " << endl;
    for(int i = 0 ; i <= size ; i++){
        cout << arr[i] << endl;
    }
}



