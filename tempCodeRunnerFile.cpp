#include <iostream>
using namespace std;

// 1. Prosedur Masukan Data
void masukanData(float &b, float &t)
{
    cout << "Masukkan Berat Badan (kg): ";
    cin >> b;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> t;
}

// 2. Fungsi Hitung BMI
float hitungBMI(float b, float t)
{
    return b / (t * t);
}

// 3. Fungsi Cek Kondisi
string cekKondisi(float bmi)
{
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    if (bmi < 25)
        return "Berat Badan Normal";
    if (bmi < 30)
        return "Berat Badan Kelebihan";
    return "Obesitas";
}

int main()
{
    float berat, tinggi, hasil;

    masukanData(berat, tinggi);
    hasil = hitungBMI(berat, tinggi);

    cout << "\nSkor BMI Anda : " << hasil << endl;
    cout << "Kondisi Tubuh : " << cekKondisi(hasil) << endl;

    return 0;
}