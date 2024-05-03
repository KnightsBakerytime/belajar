#include <iostream>
#include <unordered_map>
using namespace std;

void cetak_nilai(unordered_map<string,int> value , string status){
    cout << "Element yang ada pada hash_map " << status  << endl;
    for(const auto& element : value){
        cout << element.second << endl;
    }
}

int main(){
    // inisialiasi hash_map
    unordered_map<string,int> hash_mapVariable;

    // cara mengisi create_value
    hash_mapVariable["One"] = 1;
    hash_mapVariable["Tree"] = 3;
    hash_mapVariable["Two"] = 2;
    hash_mapVariable["Four"] = 4;

    // memanggil semua nilai 
    cetak_nilai(hash_mapVariable,"baru di isi");
    // memanggil nya nilai tertentu
    cout << "Memanggil nilai yang key nya Two : " << hash_mapVariable["Two"]  << endl;
    // update
    hash_mapVariable["Two"] = 8;
    cetak_nilai(hash_mapVariable,"setelah di update");
    // menghapus 
    hash_mapVariable.erase("Two");
    cetak_nilai(hash_mapVariable,"setelah di hapus");

    // untuk mencetak dari key sampai value 
    cout << "Cetak semua key dengan value " << endl;
    cout << " key : value" << endl;
    for(const auto& element : hash_mapVariable){
        cout << element.first << " : " << element.second << endl;
    }

    return 0;
}