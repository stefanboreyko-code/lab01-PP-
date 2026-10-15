#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Podaj trzy liczby (a b c): ";
    cin >> a >> b >> c;

    double srednia = (a + b + c) / 3.0;

    cout << fixed;
    cout << "Srednia (1 miejsce po przecinku): " << setprecision(1) << srednia << endl;
    cout << "Srednia (2 miejsca po przecinku): " << setprecision(2) << srednia << endl;
    cout << "Srednia (4 miejsca po przecinku): " << setprecision(4) << srednia << endl;
    return 0;
}
