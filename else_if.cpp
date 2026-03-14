#include <iostream>
using namespace std;

//mendeklarasikan fungsi untuk menghitung rata-rata dari dua nilai, fungsi ini akan menerima dua parameter bertipe float dan mengembalikan hasil rata-rata dari kedua nilai tersebut.
float Rata_rata(float a, float b) {
    return (a + b) / 2;
}

//fungsi ini adalah contoh dari penggunaan if else, dimana kita akan mengecek apakah nilai rata-rata yang dihitung lebih besar atau sama dengan 60 atau tidak, jika lebih besar atau sama dengan 60 maka kita akan mengembalikan string "Lolos", jika tidak maka kita akan mengembalikan string "Gagal".
string Status_lulus(float r)
{
    if (r >= 60){
        return "Lolos";
    }
    else{
        return "Gagal";
    }
}

//fungsi utama dari program ini, dimana kita akan meminta user untuk memasukkan nilai Bahasa Inggris dan Matematika, kemudian kita akan menghitung rata-rata dari kedua nilai tersebut menggunakan fungsi Rata_rata, dan terakhir kita akan mengecek status kelulusan menggunakan fungsi Status_lulus dan mencetak hasilnya ke layar.
int main()
{
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan Nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukkan Nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilBI + nilMT) / 2;
    //if (rerata >= 60){
    //    status = "Lolos";
    //else
    //    status = "Gagal";

    rerata = Rata_rata(nilBI, nilMT);
    //status = Status_lulus(reata);

    cout << "Status Kelulusan: " << Status_lulus(rerata) << ", dengan nilai rerata = "<<rerata<< endl;
    return 0;
}