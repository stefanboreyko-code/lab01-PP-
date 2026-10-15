#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cena;
    int sztuki;

    cout << "Podaj cene jednego produktu: ";
    cin >> cena;
    cout << "Podaj liczbe sztuk: ";
    cin >> sztuki;

    double razem = cena * sztuki;

    cout << fixed << setprecision(2);
    cout << "Cena: " << cena << endl;
    cout << "Liczba sztuk: " << sztuki << endl;
    cout << "Razem: " << razem << endl;
    return 0;
}
