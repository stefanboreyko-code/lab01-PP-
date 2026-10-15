#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string imie, nazwisko;

    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "+-------------------+" << endl;
    cout << "| IMIE:     " << left << setw(8) << imie << "|" << endl;
    cout << "| NAZWISKO: " << left << setw(8) << nazwisko << "|" << endl;
    cout << "+-------------------+" << endl;
    return 0;
}
