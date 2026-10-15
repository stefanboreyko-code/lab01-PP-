#include <iostream>
using namespace std;

int main() {
    char znak;
    int liczba;

    cout << "Podaj znak: ";
    cin >> znak;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    cout << "Wprowadzono znak: " << znak << ", liczba: " << liczba << endl;

    if (znak == 'A') {
        cout << "Komunikat dla litery A: Wybrano opcje A!" << endl;
    } else if (znak == 'B') {
        cout << "Komunikat dla litery B: Wybrano opcje B!" << endl;
    } else if (znak == 'C') {
        cout << "Komunikat dla litery C: Wybrano opcje C!" << endl;
    } else {
        cout << "Podano inny znak niz A, B lub C." << endl;
    }

    return 0;
}
