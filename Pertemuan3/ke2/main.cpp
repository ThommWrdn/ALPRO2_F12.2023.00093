#include <iostream>
#include <math.h>
using namespace std;

//type data, Nama fungsi, (parameter)
int max(int a, int b){
    if(a > b){
        cout << a <<endl; //output bisa diganti
        return a;
    }else  {
        cout << b <<endl;
        return b;
    }
}

int main()
{
    int x =5;
    int y =20;

    if (x > y){
        cout << x << " lebih dari " << y <<endl;
    }else if (x < y){
        cout << x << " kurang dari " << y <<endl;
    }else {
        cout << x << " sama dengan " << y <<endl;
    }

    for (int i = 0; i < 10; i++){
        x++;//5
        y++;//20
        cout << "looping ke : " << (i + 1) << " : " << max(x, y) << endl;
    }
    return 0;
}
