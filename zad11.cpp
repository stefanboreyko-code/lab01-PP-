#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double c, f;
    
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> c;
    
    f = (9.0 / 5.0) * c + 32.0;
    
    cout << fixed << setprecision(2);
    cout << "Temperatura w Fahrenheitach: " << f << endl;
    
    return 0;
}