#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namaFile;

    cout << "masukan nama file: ";
    cin >> namaFile;

    //operasi file dalam mode nulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membuka
    outfile.open(namaFile +".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true){
        cout << "-";
        //mendapatakan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke  dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //operasi file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file untuk membuka
    infile.open(namaFile +".txt");

    cout << endl << ">= Membuka dan membaca file" << endl;
    // jika file ada maka
    if (infile.is_open())
   
}