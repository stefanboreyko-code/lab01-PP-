#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    cout << "Podaj boki prostokata (a i b): ";
    cin >> a >> b;
    
    cout << "Pole: " << a * b << endl;
    cout << "Obwod: " << 2 * (a + b) << endl;
    
    return 0;
}