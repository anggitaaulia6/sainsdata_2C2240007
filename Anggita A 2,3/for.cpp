#include <iostream>
using namespace std;

int main () { 
    int nilai_awal, nilai_akhir;
    // Meminta input dari user untuk nilai nilai_awal dan nilai_akhir
    cout << "masukkan nilai_awal: ";
    cin >> nilai_awal;
    cout << "masukkan nilai_akhir: ";
    cin >> nilai_akhir;

// Perulangan dari nilai_awal hingga nilai_akhir 
for (int i = nilai_awal; i <= nilai_akhir; i++) {
    cout << i << ".classyscience.iu" << endl; // Menampilkan nilai i
}

return 0;
}