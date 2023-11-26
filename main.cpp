#include <iostream>

using namespace std;

int main()
{
    cout << "PROGRAM MENENTUKAN NILAI TERTINGGI\n";
    cout << "-------------DALAM ARRAY----------\n";
    cout << endl;

    int Jml, Tinggi, Hasil;
    cout << "Masukkan banyaknya indeks dalam array = ";
    cin >> Jml;
    cout << endl;

    int Data[Jml];
    for (int i = 0; i<Jml; i++){
        cout << "masukkan nilai pada indeks ke - " <<i<< " = ";
        cin >> Data [i];
        cout << endl;
    }

    cout << endl;
    Tinggi=Data[0];
    for (int x = 0; x<Jml; x++){
        if (Data [x] >Tinggi){
            Tinggi=Data[x];
        }
    }


    cout << "Nilai Tertinggi adalah = " << Tinggi << endl;
    cout << endl;

    if (Data == 0){
        cout << "indeks tidak ditemukan" << endl;

    } else {
        cout << "Nilai tertinggi terdapat di = " << endl;
        for (int x=0; x < Tinggi; x++)
        if (Tinggi == Data [x]){
            cout << "indeks ke - " << x << endl;
        }
    }
    return 0;
}
