#include<iostream>
#include<vector>
using namespace std;

void cetak_nilai(vector<int> value);
int main(){
    vector<int> number;

    // cara isinya
    number.push_back(10); // 0
    number.push_back(12); // 1
    number.push_back(13); // 2
    number.push_back(11); // 3

    // cara memanggil 
    cetak_nilai(number);
    

    // updatenya 
    // posisi mana yang akan di update 
    number[0] = 2;

    cetak_nilai(number);

    // cara hapus 
    // menghapus secara posisi tertentu
    number.erase(number.begin()+1);
    // menghpaus akhir nilai 
    number.pop_back();
    cetak_nilai(number);
    return 0;    
}
void cetak_nilai(vector<int> value){
    cout << " Element dalam array list" << endl;
    for(int num : value){
        cout << num << endl;
    }
}