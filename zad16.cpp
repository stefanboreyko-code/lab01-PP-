#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj trzy liczby calkowite a, b, c: ";
    cin >> a >> b >> c;

    if (c == 0) {
        cout << "Blad: nie mozna dzielic przez zero!" << endl;
        return 1;
    }

    int wynik_int = (a + b) / c;
    double wynik_double = static_cast<double>(a + b) / c;

    cout << "Wynik (dzielenie calkowite int): " << wynik_int << endl;
    cout << "Wynik (dzielenie zmiennoprzecinkowe double): " << wynik_double << endl;
    return 0;
}
