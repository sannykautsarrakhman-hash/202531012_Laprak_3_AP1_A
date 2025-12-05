#include <iostream>
using namespace std;
int main (){
    int kecepatan;
    
    cout << "============================\n" ;
    cout << "   Drone Racing\n" ;
    cout << "============================\n";
    
    cout << "Masukan kecepatan (km/h)\t:" ;
    cin >> kecepatan ;
    
    string level;
    if (kecepatan < 40) {
        level = "Basic";
    } else if (kecepatan <= 79) {
        level = "Intermediate";
    } else if (kecepatan <= 119) {
        level = "Advanced";
    } else {
        level = "Ultra";
    }
    
    cout << "Level Drone\t\t\t:" << level << endl;
    return 0;
}
