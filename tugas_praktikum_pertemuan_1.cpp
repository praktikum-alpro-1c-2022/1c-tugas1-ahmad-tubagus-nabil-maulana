#include <iostream>

using namespace std;

int main(){
    // tugas 1
    string nama = "Ahmad Tubagus Nabil Maulana", npm = "2210631170110", kelas = "1C Informatika", hobi = "Nonton anime", cita_cita = "ingin mendirikan perusahaan startup yang terhebat di dunia";
    int umur = 18;

    cout << "NPM : " << npm << endl;
    cout << "Nama : " << nama << endl;
    cout << "Umur : " << umur << " tahun" << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Hobi : " << hobi << endl;
    cout << "Cita-cita : " << cita_cita << endl
    << endl;

    // tugas 2 (menggunakan variable sementara)
    int a = 5;
    int b = 6;

    int c = a;
    a = b;
    b = c;
    cout << "Menggunakan variable sementara" << endl;
    cout << "nilai awal a adalah 5, sesudah ditukar berubah menjadi: " << a << endl;
    cout << "nilai awal b adalah 6, sesudah ditukar berubah menjadi: " << b << endl
    << endl;


    // tugas 2 (tanpa variable sementara)
    int numA = 10;
    int numB = 20;

    cout << "Tanpa menggunakan variable sementara" << endl;
    cout << "nilai awal numA " << numA << " dan numB " << numB << endl;

    numA = numA + numB;
    numB = numA - numB;
    numA = numA - numB;

    cout << "setelah ditukar berubah menjadi numA " << numA << " dan numB " << numB << endl;

    return 0;
}
