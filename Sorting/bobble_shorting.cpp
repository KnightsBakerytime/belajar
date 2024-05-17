#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>

using namespace std;


void genereteRandomArray(int arry[], int n){
    srand(time(NULL));
    for(int i=0 ; i <= n ; i++){
        arry[i] = rand() % 10 + 1 ;
    }
}

void printArray(int array[],int size){
    for(int i = 0 ; i < size ; i++){
        cout << array[i] << ", ";
    }
    cout << endl;
}

// login booble sorting

int* boobleSort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                //tukar posisi
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
// selectionSort
int* selectionSort(int arr[], int n){
    int i , j , min_idx;
    for(i =0 ; i < n -1 ; i++){
        min_idx = i; // ambil posisi angka pertama
        for(j = i+1 ; j < n ; j++){
            if(arr[j] < arr[min_idx]){ // bandingkan apakah aka peratma ini besar dari angka sebelumnya
                min_idx = j; // posisi angka sekarang di ganti dengan posisi yang besar 
            }
        }
        int temp = arr[min_idx];// simpan nilai yang besar
        arr[min_idx]= arr[i]; // tukar tempat dengan yang besar 
        arr[i] = temp; // tukar tempat yang kecil jadi besar
    }
    return arr;
}


int main(){
    // inputan di mana jumlah data yang di diinginkan;
    int n ;
    cout << "Masukan jumlah data yang diinginkan : " ;
    cin >> n;
    
    // persiapkan panjang array
    int array[n];
    genereteRandomArray(array,n);
    cout << "Array sebelumnya : " <<endl;
    printArray(array,n);

    // mengukur waktu sebelum mulai booble short
    auto start = chrono::high_resolution_clock::now();

    // logic sorting 
    // int* value = boobleSort(array,n);
    // int* value = selectionSort(array,n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float> duration = end - start;

    // hasil cetak;
    cout << "Array set setelah di urutkan : " << endl;
    printArray(value,n);
    float detik = duration.count();
    cout << "waktu yang di perlukan untuk menyelesaikan sorting " << detik << " mili detik" << endl;
    return 0;
}