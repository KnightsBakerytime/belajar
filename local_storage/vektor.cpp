#include<iostream>
#include<vector>
using namespace std;

void cetak_nilai(vector<int> value , string urutan){
    cout << " element yang ada di dalam vektor " << urutan << " : "  << endl;
    for(int num : value){
        cout << num << endl;
    }
}


int main(){
    // inisialasisi vektor kosong
    vector<int> vectorNumber;
    // cara masukan nilai ke dalam vektor 
    vectorNumber.push_back(10); // 0
    vectorNumber.push_back(30); // 1
    vectorNumber.push_back(20); // 2
    // cara mencetak nilai yang ada di vektor 
    cetak_nilai(vectorNumber,"Setelah di input atau di isi");
    // merubah atau update 
    vectorNumber[1] = 40 ;
    cetak_nilai(vectorNumber,"Setelah di update urutan nomer 2");
    // kita mau mengahpus nilai yang terakhir 
    vectorNumber.pop_back();
    cetak_nilai(vectorNumber,"Setelah di update nilai yang terakhir");
    return 0;
}