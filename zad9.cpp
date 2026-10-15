#include <iostream>
using namespace std;

int main() {
    double r;
    const double PI = 3.1415926535;
    
    cout << "Podaj promien kola: ";
    cin >> r;
    
    cout << "Obwod: " << 2 * PI * r << endl;
    cout << "Pole: " << PI * r * r << endl;
    
    return 0;
}