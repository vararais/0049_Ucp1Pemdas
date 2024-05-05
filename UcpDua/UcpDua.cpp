#include <iostream>
using namespace std;

int indeks;
string kota;

void input() {
    cout << "Masukan Nama Kota = ";
    cin >> kota;
    cout << "Masukan Indeks Udara = ";
    cin >> indeks;
}


void display() {
    cout << " Kota = ";
    cin >> kota;
    cout << " Indeks = ";
    cin >> indeks;
}

int main()
{
    input();
    display();

    system("pause");
    system("cls");
}



// 1.Ada String, Float dan int
// 
// 2.Implementasi dari prosedur dan fungsi adalah 
// cout << " Masukkan Nama Anda " ;
// cin >> nama;
// cout << " Masukan Alamat Anda ";
// cin >> alamat;
// 
// sedangkan fungsi memiliki implementasi seperti saat kita mentotalkan suatu list barang belanjaan
// 
// 3.Implementasi dari looping diantaranya adalah ketika kita mengerjakan atau membuat projek , semisal 
// memasukkan nomor NIM untuk mengecek kapan kita harus membayar UKT, namun dalam prosesnya kita salah memasukkan nomor
// maka menu akan otomatis mengulang hingga kita memasukkan data yang benar
// 
// 4.Implementasinya adalah ketika menggunakan If Else dikarenakan adanya suatu kondisi seperti  
// if 
// ( a < b )
// else 
// (a > b )
// 
// 5.Implementasi dari Struct yaitu ada Struct Alamat, Struct Mahasiswa dan Struct NIM 
