#include<iostream>
#include<map>
using namespace std;

void cetak_nilai(map<int,string> value , string status){
    cout << "Isi variable hash_map  dengan status : " << status << endl;
    for(int k =0 ; k < value.size() ; k++){
        cout << value[k] << endl;
    }
}

int main(){
    // inisialiasi hash_map
    map<int,string> tree_map;

    // gimana cara isi ? 
    tree_map[1] = "Leptop";
    tree_map[3] = "HP";
    tree_map[2] = "Carger";

    // cetak semua nilai  
    cetak_nilai(tree_map,"selesai create");
    // cetak cuman nilai tertentu
    // note harus tau dulu key yang mau di panggil 
    cout << "value yang ada di urutan ke 2 : "  << tree_map[2] << endl;

    // mengganti nilai yang key nya nomer 1 ;
    tree_map[1] = "PC Gameing";
    cetak_nilai(tree_map,"setelah update yang ke nya nomer 1");

    // menghapus (erase)
    tree_map.erase(1);
    cetak_nilai(tree_map,"key 1 di hapus");

    // cara mikirin biar size nya kita anggap tidak tau
    // ini akan memunculkan key berserta value
    cout << "Persingkat For pada hash_map" << endl;
    for(const auto& element : tree_map){
        cout << element.first << " : " << element.second << endl;
    }
    return 0;
}