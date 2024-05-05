#include <iostream>
using namespace std;

struct Mahasiswa
{
  string nama;
  string status;
};

int main() {
    int nMatematika, nInggris, nRerata;
    string status;

    cout << "Masukkan Nilai Matematika : ";
    cin >> nMatematika;
    cout << "Masukkan Nilai Inggris : ";
    cin >> nInggris;

    nRerata = nMatematika + nInggris / 2;

    if (nRerata > 70 || nInggris > 80) {
        status = "Diterima";
    }

    else  {
      status = "Ditolak";
    }
    

    cout << "Status Pelajar : " << status << endl;

    system("pause");
}

// 1. int main(){
//   int nAngkatan;
//   string nNama;
//   float nNilai;

//   cout << "Angkatan Berapa : ";
//   cin >> nAngkatan;
//   cout << "Masukkan Nama Anda : ";
//   cin >> nNama;
//   cout << "Nilai Mahasiswa : ";
//   cin >> nNilai;

//   cout << endl;
//   cout <<"\n Angkatan : "<<nAngkatan;
//   cout <<"\n Nama : "<<nNama;
//   cout <<"\n Nilai : "<<nNilai;



  // 2. int nMatematika, nFisika, nRerata;
  //   string status;

  //   cout << "Masukkan Nilai Matematika : ";
  //   cin >> nMatematika;
  //   cout << "Masukkan Nilai Fisika : ";
  //   cin >> nFisika;

  //   nRerata = nMatematika + nFisika / 2;

  //   if (nRerata > 60) {
  //       status = "Lulus";
  //   }
    

  //   cout << "Status Pelajar : " << status << endl;



//   3. struct Fakultas
// {
//   string jurusan;
//   string angkatan;
// };

// struct Mahasiswa
// {
//   string nim;
//   string nama;
//   Fakultas prodi;
//   int umur;
// };

// int main(){
//   Mahasiswa mhs;
//   cout << "Nomor Mahasiswa : ";
//   cin >> mhs.nim;
//   cout << "Nama Mahasiswa : ";
//   cin >> mhs.nama;

//   cout << "Fakultas Mahasiswa : ";
//   cout << "\t Jurusan : ";
//   cin >> mhs.prodi.jurusan;
//   cout << "\t Angkatan : ";
//   cin >> mhs.prodi.angkatan;
//   cout << "Umur Mahasiswa : ";
//   cin >> mhs.umur;

//   cout << endl;
//   cout <<"\n NIM : "<< mhs.nim;
//   cout <<"\n Nama : "<< mhs.nama;
//   cout <<"\n Alamat : ";
//   cout <<"\n \t Jurusan : " << mhs.prodi.jurusan;
//   cout <<"\n \t Angkatan : " << mhs.prodi.angkatan;
//   cout <<"\n Umur : "<< mhs.umur;



// 4. string laptop;
// int nMSI, nAsus, nAcer, nAdvan, nAxioo;
// int hMSI = 300, hAsus = 8000, hAcer = 250, hAdvan = 200, hAxioo = 6000;

// void input(){
//   cout << "Nama Pembeli : ";
//   cin >> laptop;
//   cout << " Jumlah MSI : ";
//   cin >> nMSI; 

  
//   cout << " Jumlah Asus : ";
//   cin >> nAsus; 

 
//   cout << " Jumlah Acer : ";
//   cin >> nAcer; 

 
//   cout << " Jumlah Advan : ";
//   cin >> nAdvan; 


//   cout << " Jumlah Axioo : ";
//   cin >> nAxioo; 
// }

// int TotalHarga(){
//   return (nMSI * hMSI) + (nAsus * hAsus) + (nAcer * hAcer) + (nAdvan * hAdvan) + (nAxioo * hAxioo); 
// }

// void Display(){
//   cout << "Total Harganya : " << TotalHarga() << endl; 
// }

// int main(){
//   char pilihan;
//   do
//   {
//     input();
//     Display();
//     cout << "Apakah ingin membeli kembali?"; 
//     cin >> pilihan;
//   }while(pilihan == 'y'||pilihan == 'Y');



// 5. char pilihanmu;

//   do{
//     cout << "Belajar UCP Pemdas?" << endl;

//     cout << "Buka Laptop" << endl;
//     cout << "Belajar" << endl;
//     cout << "Belajar lagi sampai malam?" << endl;
//     cin >> pilihanmu; 
//   }while(pilihanmu == 'y' || pilihanmu == 'Y');
// }