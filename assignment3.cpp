/*
Anggota Kelompok :
- Yefta Panggabean
- Rafael Sitohang
- William Hutapea
*/

#include <iostream>
using namespace std;

struct Mahasiswa
{
    int nim;
    string nama;
    double ipk;
};

// #Insertion sort
/*
Algoritma ini membagi data menjadi dua bagian: satu bagian belum diurutkan dan satu bagian sudah diurutkan.
Pertama, algoritma ini mengambil elemen pertama dari bagian yang belum diurutkan dan meletakkannya pada posisi yang sesuai dalam bagian yang sudah diurutkan.
Langkah ini diulang sampai tidak ada lagi elemen yang tersisa dalam bagian yang belum diurutkan.
*/
int insertionSort(Mahasiswa maha[])
{
    for (int i = 0; i < 8; i++)
    {
        int banding = maha[i].nim;
        int j = i - 1;
        while ((j >= 0) && (maha[i].nim > banding))
        {
            maha[j + 1].nim = maha[j].nim;
            j--;
        }
    }
}

int linearSearch(Mahasiswa maha[], int key)
{
    for (int i = 0; i < 8; i++)
    {
        if (maha[i].nim == key)
            return i;
    }
    return -1;
}
void tampilan(Mahasiswa maha[]){
      cout << "NIM\tNama\tIPK\n";
    for (int i = 0; i < 8; i++)
    {
        cout << maha[i].nim << "\t" << maha[i].nama << "\t" << maha[i].ipk << endl;
    }
    }
int main()
{
    int key;
    Mahasiswa maha[8];
    maha[0] = {19006, "Matthew", 3.15};
    maha[1] = {19004, "Brad", 2.94};
    maha[2] = {19003, "Anthony", 2.78};
    maha[3] = {19007, "Gilian", 3.37};
    maha[4] = {19005, "Susan", 2.93};
    maha[5] = {19001, "Miya", 3.01};
    maha[6] = {19008, "Alice", 3.56};
    maha[7] = {19002, "Ralf", 3.44};

tampilan(maha);    
    
    bool search = true;
    char pilih;

    
    while (search)
    {
        cout << "Masukkan NIM Yang Akan Dicari: ";
        cin >> key;
        int hasil = linearSearch(maha, key);
        if (hasil != -1)
        {
            cout << "Nim\tNama\tIPK" << endl;
            cout << maha[hasil].nim << "\t" << maha[hasil].nama << "\t" << maha[hasil].ipk << endl;
        }
        else
        {
            cout << "NIM " << key << " tidak ditemukan" << endl;
        }

        cout << "Tekan 'x' untuk keluar || tekan 1 untuk melanjutkan ";
        cin >> pilih;

        if (pilih == 'x')
        {
            search = false;
        }
    }

    return 0;
}
