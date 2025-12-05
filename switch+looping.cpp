#include <iostream>
using namespace std;

int main() {
    int pilihan, menit;
    int tarif = 0;

    cout << "==============================\n";
    cout << "       Arena Gym - Sewa Alat\n";
    cout << "==============================\n";

    cout << "Pilihan alat:\n";
    cout << "1 => Dumbbell   (Rp 5.000 / 15 menit)\n";
    cout << "2 => Treadmill  (Rp10.000 / 15 menit)\n";
    cout << "3 => Barbell    (Rp 8.000 / 15 menit)\n";
    cout << "4 => Static Bike(Rp 7.000 / 15 menit)\n";

    cout << "Masukkan pilihan alat (1-4): ";
    cin >> pilihan;
    cout << "Masukkan durasi pemakaian (menit): ";
    cin >> menit;

    switch (pilihan) {
        case 1: tarif = 5000; break;
        case 2: tarif = 10000; break;
        case 3: tarif = 8000; break;
        case 4: tarif = 7000; break;
        default:
            cout << "Pilihan alat tidak valid. Program dihentikan.\n";
            return 0;
    }

    int total = 0;
    int sisa = menit;

    // Looping: tambahkan tarif untuk setiap interval 15 menit (jika ada sisa, tetap dihitung sebagai 1 interval)
    while (sisa > 0) {
        total += tarif;
        sisa -= 15;
    }

    cout << "\nTotal biaya sewa: Rp " << total << endl;
    return 0;
}
