#include <iostream>
#include <iomanip> // Dipakai untuk menjalankan setw untuk buat tabel
using namespace std;

int main()
{
    //  output nama mahasiswa
    string mahasiswa[10] = {"Yayan", "Fhaisal", "Kamal", "Farid", "Raffa", "Seno", "Ilham", "Azzam", "Fikar", "Rolis"};

    //  array pointer menuju ke alamat string array mahasiswa
    string *alamatMahasiswa[10];
    // isi array pointer alamatMahasiswa dengan alamat elemen di array mahasiswa
    for (int i = 0; i < 10; ++i)
    {
        alamatMahasiswa[i] = &mahasiswa[i];
    }

    // Output tabel nya
    cout << "------------------------------------------------\n";
    cout << "| Nama Mahasiswa |   Alamat Komputer           |\n";
    cout << "------------------------------------------------\n";

    for (int i = 0; i < 10; ++i) // Nampilin data dalam bentuk tabel
    {
        // Nentuin lebar kolom buat nama mahasiswa sama alamat komputer
        cout << "| " << setw(14) << left << mahasiswa[i] << " | " << setw(27) << &(*alamatMahasiswa[i]) << " |\n";
    }

    cout << "------------------------------------------------\n";

    return 0;
}
