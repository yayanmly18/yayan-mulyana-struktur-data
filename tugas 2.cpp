#include <iostream>
using namespace std;

// Mendefinisikan struktur data Siswa
struct Siswa
{
    string nama;
};

// Fungsi untuk menginput data nama siswa ke dalam array siswa
void inputSiswa(Siswa *siswa, int index)
{
    // Meminta pengguna untuk memasukkan nama siswa ke-<index + 1>
    cout << "Masukkan data nama siswa ke-" << index + 1 << ": ";

    // Mengabaikan karakter baru yang tersisa di buffer input sebelumnya
    cin.ignore();

    // Menggunakan getline() untuk membaca seluruh baris input, termasuk spasi
    getline(cin, siswa[index].nama);
}

int main()
{
    // Mendeklarasikan array siswa dengan maksimal 10 elemen
    Siswa siswa[10];

    // Meminta pengguna untuk memasukkan jumlah siswa
    cout << "Masukkan jumlah siswa : ";
    int jumlahSiswa;
    cin >> jumlahSiswa;

    // Memeriksa apakah jumlah siswa tidak melebihi 10
    if (jumlahSiswa > 10)
    {
        // Menampilkan pesan kesalahan jika jumlah siswa lebih dari 10
        cout << "Jumlah siswa tidak boleh lebih dari 10" << endl;
        return 1; // Menghentikan program dengan kode error 1
    }

    // Menampilkan garis pemisah sebelum meminta input siswa
    cout << "\n======================================\n\n";

    // Memanggil fungsi inputSiswa() untuk setiap siswa yang akan diinput
    for (int i = 0; i < jumlahSiswa; i++)
    {
        inputSiswa(siswa, i);
    }

    // Menampilkan garis pemisah setelah semua siswa diinput
    cout << "\n======================================\n";

    // Menampilkan informasi pribadi penulis kode
    cout << "\n========================\n";
    cout << " Nama  : Yayan Mulyana\n";
    cout << " Kelas : 2C Informatika\n";
    cout << " NPM   : 2310631170057\n";
    cout << "========================\n";

    return 0; // Mengakhiri program dengan kode sukses 0
}
