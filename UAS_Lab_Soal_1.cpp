/*Judul : Buatlah Sebuah Program yang menggunakan Fungsi untuk menghitung nilai total Element Sebuah Array (Soal No.1)
  Nama  : Ivanny Putri Marianto
  NIM   : 221401101
  Lab   : Algoritma dan Pemrograman 6*/

#include <iostream>
using namespace std;


// Fungsi untuk menghitung total elemen dalam array
int hitungTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    system("CLS");
    const int size = 5;
    int arr[size];

    cout << "Masukkan " << size << " angka:\n";
    for (int i = 0; i < size; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int total = hitungTotal(arr, size);
    cout << "Total elemen dalam array: " << total << endl;

    return 0;
}