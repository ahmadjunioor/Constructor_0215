#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 215;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID    = " << id << endl;
    cout << "Nama  = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Pedro");
    mahasiswa mhs2("Cristiano neymar");
    mahasiswa mhs3("padudum");
    mahasiswa mhs4("susanto");


    mhs1.printAll();

    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}