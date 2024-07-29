
# Algoritma Hash Table

Hash table merupakan struktur data yang secara *asosiatif* menyimpan data. Dalam hal ini, data disimpan dalam format ***Array***, di mana setiap nilai data memiliki nilai indeks uniknya sendiri.


## Penjelasan Kode

### baris ke 1 - 2

fungsinya untuk mengimport library dan std

    #include <iostream>
    using namespace std;

### baris ke 5 - 11

Fungsi ini memeriksa apakah karakter yang diberikan adalah 'y' atau 'Y'. Fungsi ini mengembalikan true jika iya, dan false jika tidak

    bool check(char type){
    if(type == 'y' || type == 'Y'){
        return true;
    }else{
        return false;
        }
    };

### baris ke 17 - 18

Meminta pengguna memasukkan jumlah total data yang akan diinput(n).

    cout << "Masukan total data: ";
    int n;  cin >> n;

### baris ke 21-25

Meminta pengguna memasukkan data satu per satu, yang disimpan dalam array arr.

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Masukan data ke " << i << ": ";
        cin >> arr[i];
    }

### baris ke 30 - 33

Menampilkan data yang dimasukkan sebelum proses hashing.

    cout << "Urutan data sebelumnnya" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

### baris 37 - 40

perulangan untuk menghitung modulus dari data sebelumnya

    for(int i=0;i<n;i++){
        int k = arr[i] % n;
        cout << arr[i] << "  ----->  " << k << endl;
    }

### baris ke 45 - 53

Membuat array ars untuk menyimpan data setelah hashing.Menempatkan setiap elemen arr ke dalam ars berdasarkan nilai hash k.

    int ars[n];
    for(int i=0; i<n; i++){
        int k = arr[i] % n;
        for(int j=0; j<n; j++){
            if(j == k){
                ars[j] = arr[i];
            }
        }
    }

### baris ke 55 - 57

menampilkan data array ars yang sudah hashing(terurut)

    for(int i=0; i<n; i++){
        cout << ars[i] << " ";
    }

### baris ke 62-69

Menanyakan pengguna apakah mereka ingin menghapus data.

Jika ya, meminta pengguna memasukkan nilai data yang ingin dihapus.

Jika Tidak, maka program selesai

    char type;
    cout << "Apakah ingin menghapus data? [y/n] ";
    cin >> type;
    if(check(type)){
        cout << "Data apa yang ingin dihapus? ";
    }else{
        return 0;
    }

### baris ke 76 - 83

Menghapus data yang diminta dengan menggantinya menjadi -1 dalam array ars.

Menampilkan tabel hash setelah penghapusan data.

    for(int i=0; i<n; i++){
        if(ars[i] == erase){
            ars[i] = -1;
            cout << ars[i] << " ";
        }else{
            cout << ars[i] << " ";
        }
    }
## Authors

- Faika
- immanuel
- atta
- nabila
- Cilla
- viola

