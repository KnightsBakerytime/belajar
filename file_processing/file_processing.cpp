#include<iostream>
#include<fstream> // ini untuk lib pembuatan file 

using namespace std;
int main(){

    // menulis atau membuat file baru (w)
    ofstream writeFile("penulisan.txt",ofstream::out);
    if(writeFile.is_open()){
        cout << "File di penulisan.txt di temukan !" << endl;
        cout << endl;

        // penulisan
        writeFile << "Profile Kariawan codingstudio \n";
        writeFile << " nama : Alfadjri Dwi Fadhilah \n";
        writeFile << " panggilan : jri";
        writeFile.close(); // kenapa harus ada ini biar ram dari komputer tidak sedang minimize  
    }else{
        cout << "File tidak di temukan" << endl;
    }

    cout << endl;

    // untuk membaca nilai yang ada pada file  (r)
    ifstream readFile("penulisan.txt", ifstream::in);
    if(readFile.is_open()){
        cout << "Data dengan nama penulisan.txt bisa di baca !" << endl;
        // menyimpan nilai yang ada pada penulisan.txt
        string line;
        // membaca
        while(getline(readFile,line)){
            cout << line << endl;
        }
    }else{
        cout << "File dengan nama penulisan.txt tidak di temukan" << endl;
    }
    cout << endl;
    // kasus file ini belum ke buat  (menambahkan atau update)
    // file append ios::app bisa langsung membuat file tampa file itu di temukan
    ofstream appendFile("penulisan.txt",ios::app);
    if(appendFile.is_open()){
        cout << "File penulisan.txt di temukan !" << endl;
        appendFile << "\n Jabatan : IT Support & maestro cybersecurity \n" ;
        appendFile.close();
    }else{
        cout << "File tidak ditemukan !"<< endl;
    }

    // kasus file nya tidak ada 
    // membaca dan sekaligus mengisi 
    // jika menggunakan in && out itu harus ada file dulu 
    fstream readAndWrite("Profile2.txt",ios::in | ios::out);
    if(readAndWrite.is_open()){
        cout << "File dengan nama Profile2.txt di temukan" << endl;
        readAndWrite << "Pesan ini akan muncul jika Profile2 di temukan!\n";
        string isiFile;
        while(getline(readAndWrite,isiFile)){
            cout << isiFile << endl;
        }
        readAndWrite.close();
    }else{
        cout << "File belum buat silahkan buat terlebih dahulu" << endl;
    }


    // kasusnya 
    // saya ingin apa yang di print itu tersimpan atau sebagai log 
    // (a+) (append/read)
    fstream appendAndRead("Profile3.txt",ios::app | ios::in);
    if(appendAndRead.is_open()){
        cout << "File Profile3.txt di temukan" << endl;
        appendAndRead << "1\n";
        string baris;
        while(getline(appendAndRead,baris)){
            cout << baris << endl;
        }
        appendAndRead.close();
    }else{
        cout << "File Profile3.txt tidak di temukan" << endl;
    }
    
    // gabungan antara out, in , trunc
    // (W+) write / read
    fstream writeAndRead("Profile4.txt",ios::out | ios::in | ios::trunc);
    if(writeAndRead.is_open()){
        cout << "File Profile4.txt di temukan" << endl;
        writeAndRead << "ini isi pertama dari profile4\n";
        writeAndRead << "Ini testing ke 2";
        writeAndRead.close();
    }else{
        cout << "File Profile4.txt tidak ditemukan" << endl;
    }
    return 0 ;
}