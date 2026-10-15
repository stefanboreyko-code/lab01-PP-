#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "================ Tabela Produktow ================" << endl;
    cout << left << setw(5) << "nr" << setw(20) << "nazwa" << right << setw(10) << "cena" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(5) << 1 << setw(20) << "Mleko" << right << setw(10) << 3.50 << endl;
    cout << left << setw(5) << 2 << setw(20) << "Chleb" << right << setw(10) << 4.20 << endl;
    cout << left << setw(5) << 3 << setw(20) << "Jablka (1kg)" << right << setw(10) << 2.99 << endl;
    return 0;
}
