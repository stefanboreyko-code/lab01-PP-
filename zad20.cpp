#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cout << "Podaj pierwsza liczbe double: ";
    cin >> a;
    cout << "Podaj druga liczbe double: ";
    cin >> b;

    ios oldState(nullptr);
    oldState.copyfmt(cout);

    cout << "\n--- Liczba A: " << a << " ---" << endl;
    cout << "Standardowy format: " << a << endl;
    cout << "Fixed (2 miejsca): " << fixed << setprecision(2) << a << endl;
    cout << "Scientific: " << scientific << a << endl;

    cout.copyfmt(oldState);

    cout << "\n--- Liczba B: " << b << " ---" << endl;
    cout << "Standardowy format: " << b << endl;
    cout << "Fixed (2 miejsca): " << fixed << setprecision(2) << b << endl;
    cout << "Scientific: " << scientific << b << endl;

    return 0;
}
