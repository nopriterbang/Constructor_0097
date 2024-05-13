#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;

private:
    Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    }        
class Mahasiswa
();
Mahasiswa(string);
Mahasiswa(int iNim, string iNama);
void cetak();

};

Mahasiswa::Mahasiswa(string iNama){
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim,string iNama)
{
    nim = iNim;
    nama = iNama;
};

void Mahasiswa::cetak(){
 cout << "NIM = " << nim << endl;
 cout << "Nama = " << nama << endl;
 cout << endl;
}

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Ronaldo");
    Mahasiswa mhs4(30, "Messi");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
    
    return 0;
}




