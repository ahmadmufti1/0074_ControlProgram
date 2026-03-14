#include <iostream>
using namespace std;

float Rata_rata(float a, float b) {
    return (a + b) / 2;
}

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