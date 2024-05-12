#include<iostream>
using namespace std;

// inisialisasai struktur data
struct Antrian{
    int data;
    Antrian* next;
};


int main(){
    // mengarhakan data  nya ada berbeberapa
    Antrian* head = nullptr;
    Antrian* second = nullptr;
    Antrian* third = nullptr;
    Antrian* four = nullptr;

    // berikan dia ruang 
    head = new Antrian();
    second = new Antrian();
    third = new Antrian();
    four = new Antrian();

    // mengisi agar data sesuai yang di minta
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = four;

    four->data = 5;
    four->next = nullptr;

    Antrian* gabung = head;

    while(gabung != nullptr){
        cout << gabung->data << endl;
        gabung = gabung->next;
    }
    cout<< endl;

    delete head;
    delete second;
    delete third;
    delete four;

    return 0;
}