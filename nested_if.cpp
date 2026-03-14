#include <iostream>
using namespace std;

//mendeklarasikan fungsi untuk menghitung rata-rata dari dua nilai, fungsi ini akan menerima dua parameter bertipe float dan mengembalikan hasil rata-rata dari kedua nilai tersebut.
float Rata_rata(float a, float b) {
    return (a + b) / 2;
}

//fungsi ini adalah contoh dari penggunaan nested if, dimana kita akan mengecek apakah nilai rata-rata yang dihitung lebih besar atau sama dengan 60 atau tidak, jika lebih besar atau sama dengan 60 maka kita akan mengecek lagi apakah nilai rata-rata tersebut lebih besar dari 80 atau tidak, jika lebih besar dari 80 maka kita akan mengembalikan string "Lulus Cumlaude", jika tidak maka kita akan mengembalikan string "Lulus Baik", jika nilai rata-rata kurang dari 60 maka kita akan mengembalikan string "Gagal".
string Status_lulus(float r)
{
    if (r >= 60)
        if (r > 80){
            return "Lulus Cumlaude";
        }else{
            return "Lulus Baik";
        }
    else
        return "Gagal";
}
