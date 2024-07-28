#include <iostream>
using namespace std;
// Made by kelompok 1 XII SAINS 4

bool check(char type){
    if(type == 'y' || type == 'Y'){
        return true;
    }else{
        return false;
    }
};

int main(){
    // TITLE
    cout << "========== HASHTABLE ==========\n";
    // Memasukan total data
    cout << "Masukan total data: ";
    int n;  cin >> n;
    
    // Memasukan data
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Masukan data ke " << i << ": ";
        cin >> arr[i];
    }
    
    cout << endl;
    
    // Data sebelum diurut
    cout << "Urutan data sebelumnnya" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    //modulus
    cout << endl << endl << "n           k" << endl;
    for(int i=0;i<n;i++){
        int k = arr[i] % n;
        cout << arr[i] << "  ----->  " << k << endl;
    }
    
    cout << endl;
    // Data sesudah terurut
    cout << "Data setelah diurut" << endl;
    int ars[n];
    for(int i=0; i<n; i++){
        int k = arr[i] % n;
        for(int j=0; j<n; j++){
            if(j == k){
                ars[j] = arr[i];
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout << ars[i] << " ";
    }
    
    // Penghapusan data
    cout << endl << endl;
    
    char type;
    cout << "Apakah ingin menghapus data? [y/n] ";
    cin >> type;
    if(check(type)){
        cout << "Data apa yang ingin dihapus? ";
    }else{
        return 0;
    }
    int erase; cin >> erase;
    
    cout << endl;
    cout << "Data setelah dihapus";
    cout << endl;
    
    for(int i=0; i<n; i++){
        if(ars[i] == erase){
            ars[i] = -1;
            cout << ars[i] << " ";
        }else{
            cout << ars[i] << " ";
        }
    }
    
    
}
