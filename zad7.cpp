#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;
    cout << "Suma: " << a+b << endl;
    cout << "Roznica: " << a-b << endl;
    cout << "Iloczyn: " << a*b << endl;
    cout << "Iloraz: " << a/b << endl;
    cout << "Reszta z dzielenia: " << a%b << endl;
    return 0;
}
