#include <iostream>

using namespace std;

// deklarasi
    string Nama;
    string NIM;
    int Usia;
    float IPK;


int main()
{
    //Input Name,NIM,Usia
    cout << "Masukkan Nama :" ;
    cin >> Nama;

    cout << "Masukkan NIM :" ;
    cin >> NIM;

    cout << "Masukkan Usia :" ;
    cin >> Usia;

    cout << "Masukkan IPK :" ;
    cin >> IPK;


    cout << "----------------" <<endl;
    //Output

    cout << "Nama Anda :" << Nama <<endl;
    cout << "NIM Anda :" << NIM <<endl;
    cout << "Usia Anda :" << Usia <<endl;
    cout << "IPK Anda :" << IPK <<endl;



    //Looping / Perulangan
    for(int i = 0; i < Usia; i++){
        cout << Nama <<endl;
    }

    cout << "+++++++++++++++++++++" <<endl;

    //While Loop
    int j = 0;
        while (j < Usia) {
        cout << Nama <<endl;
        j++;
    }

    cout << "+++++++++++++++++++++" <<endl;

    //DO/While Loop
    int k = 0;
        do {
        cout << Nama <<endl;
        k++;
}
        while (k < Usia);
    return 0;
}
