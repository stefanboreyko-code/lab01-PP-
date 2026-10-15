#include <iostream>
using namespace std;
int main() 
{
    double f,c;
    cout << "Podaj temperature w deg F: ";
    cin >> f;
    c = 5.0 * (f - 32.0) / 9.0;
    cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza"<< endl;
    return 0;
}