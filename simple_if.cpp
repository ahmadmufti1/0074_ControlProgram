#include <iostream>
using namespace std;

//fungsi ini adalah contoh dari penggunaan if sederhana, dimana kita akan mengecek apakah nilai x sama dengan 5 atau tidak, jika sama maka kita akan menambahkan 1 pada nilai x dan mencetak hasilnya, jika tidak maka kita hanya mencetak nilai x yang diberikan.
int main()
{
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x==5)
    {
        x = x + 1;
        cout << "Nilai x sudah di koreksi menjadi : " << x << endl;
    }

    cout << "Bilangan yang diberikan" << x;
}