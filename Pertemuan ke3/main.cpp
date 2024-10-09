#include <iostream>

using namespace std;


// Fungsi untuk mencari nilai minimum
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    // penyebutan angka
    int x = 10;
    int y = 20;
    // looping
    for (int i = 0; i < 10; i++) {
        x++;
        y++;

        // output looping
        cout << "hitungan ke: " << (i + 1) << ": " << min(x, y) << endl;
    }

    return 0;
}
