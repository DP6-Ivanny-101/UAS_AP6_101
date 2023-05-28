/*Judul : Buat lah Sebuah Program Struct (Soal No.3)
  Nama  : Ivanny Putri Marianto
  NIM   : 221401101
  Lab   : Algoritma dan Pemrograman 6*/

#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk mahasiswa
struct Mahasiswa {
    string nama;
    int usia;
    string jurusan;
};

int main() {
    system("CLS");
    // Membuat objek mahasiswa
    Mahasiswa mhs;

    // Memasukkan data ke objek mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Masukkan Usia Mahasiswa: ";
    cin >> mhs.usia;
    cin.ignore(); // Membersihkan newline character di buffer
    cout << "Masukkan Jurusan Mahasiswa: ";
    getline(cin, mhs.jurusan);

    // Menampilkan data mahasiswa
    cout << endl;
    cout << "Data Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Usia: " << mhs.usia << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;

    return 0;
}
