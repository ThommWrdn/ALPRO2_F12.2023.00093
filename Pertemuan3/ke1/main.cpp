//Header <Library>
#include <iostream>
#include <math.h>

//biar gampang/mengurangi resiko kesalahan/membedakan variabel
using namespace std;


//instruksi coding
int main()
{
    //deklarasi of variabel
    int x;
    /*
    x = 1;//Assigment(expresion)
    int y = 1;//inisialisasi (expresion)
    */

    //Output(expresion)
    cout << "Nilai Perulangan :";
    cin >> x;

    for(int i = 0; i < x; i++){
        cout << "Hello World!" << endl;
    }

    /*int i = 0;
    while (i < x){
        cout << "Hello World!" << endl;
        i++;
    }*/
    //return statement

    int y = 5;
    /*y = 5;*/

    if (x > y){
        cout << "X lebih dari Y" <<endl;
    }else if (x < y){
        cout << "X Kurang dari Y" <<endl;
    }else if (x == y){
        cout << "X Sama dengan Y" <<endl;
    }
    return 0;
}
