#include <iostream>

using namespace std;
//bilangan terbesar
    //fungsi & parameter
    /*int max(int a,int b){
        if(a > b){
            return a;//5
        } else {
            return b;//10
        }
}*/
                //bisa pake(return a > b ? a : b; ((Ternary condition


//bilangan genap ganjil
    string GanjilGenap(int Angka){
        if ( Angka % 2 == 0){
            return "Genap";
        }
            return "Ganjil";
}
//fungsi kelipatan 3
    string KelipatanTiga(int Angka){
    if (Angka % 3 == 0){
        return "Kelipatan 3";
        }
        return "Tidak Kelipatan 3";
}


int main()
  /*int x;
    int y;
    cout << "masukan angka pertama : ";
    cin >> x;
    cout << "masukan angka kedua : ";
    cin >> y ;

    int maximum = max(x,y);//pengembalian ke fungsi
    cout << "Bilangan terbesar :" << (x,y);//Parameter Aktual*/

{
    int Angka;
    cout << "Masukkan Bilangan : ";
    cin >> Angka;
    //Output GanjilGenap
    cout << Angka << " Adalah bilangan  " << GanjilGenap(Angka) << endl;
    //Output Kelipatan 3
    cout << "Dan bilangan " << Angka << " Itu Ber" << KelipatanTiga(Angka) << endl;
    return 0;
}






//division/pembagian
//modulo/modulus /sisa hasil bagi
//int
/*8 / 3 = hasil 2, sisa = 2
      = 8 - 3  = 5 - 3 = 2

4 / 5 = 4 - 5, hasil = 0, sisa = 4

4 / 1 = 4   |   4 % 1 = 0
4 / 2 = 2   |   4 % 2 = 2
4 / 3 = 1   |   4 % 3 = 1
4 / 4 = 1   |   4 % 4 = 0
4 / 5 = 0   |   4 % 5 = 4
4 / 6 = ?   |   4 % 6 = ?
*/
/*
24%7 = 24 ÷ 7 = 3 sisa 3
30%6 = 30 ÷ 6 = 5 sisa 0
67%1 = 67 ÷ 1 = 67 sisa 0
8%2  = 8 ÷ 2 = 4 sisa 0
9%5  = 9 ÷ 5 = 1 sisa 4
*/

//fungsi untuk mengetahui sebuah bilangan, termasuk ke bilangan genap atau ganjil
/*% 2
4 6 8         | 5 7 9
0 0 0         | 1 1 1
jika (bil % 2 == 0) maka
    cetak (genap)
selain itu
    cetak (ganjil)

1. buat sebuah fungsi untuk menentukan bil termasuk genap atau ganjil.*/


/*mana kelipatan 3?
3%3
4%3
9%3
10%3
12%3*/




