#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "==============================\n";
    cout << "    Survival Camp - Gear Level\n";
    cout << "==============================\n";

    cout << "Masukkan umur peserta\t: ";
    cin >> umur;

    string gear;

    if (umur < 10) {
        gear = "Starter Kit";
    } else {
        if (umur <= 15) {
            gear = "Basic Gear";
        } else {
            if (umur <= 20) {
                gear = "Pro Gear";
            } else {
                gear = "Expert Gear";
            }
        }
    }

    cout << "Level peralatan\t\t: " << gear << endl;
    return 0;
}
