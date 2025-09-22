#include <iostream>
using namespace std;

int main() {
    const int jumlahBarang = 10; 
    int harga[jumlahBarang];
    int total = 0;

    for (int i = 0; i < jumlahBarang; i++) {
        cout << "Masukkan harga barang ke-" << i+1 << ": ";
        cin >> harga[i];
        total += harga[i];
    }

    cout << "\nDaftar harga barang: ";
    for (int i = 0; i < jumlahBarang; i++) {
        cout << harga[i] << " ";
    }

    cout << "\nTotal belanja: " << total << endl;

    return 0;
}
