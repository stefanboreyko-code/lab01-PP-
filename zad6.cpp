#include <string>
#include <iostream>
using namespace std;
int main(){
    string imie, nazwisko;
    int wiek;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj wiek: ";
    cin >> wiek;
    cout << "Nazywasz sie "<< imie << " " << nazwisko << " i masz " << wiek << " lat." << endl;
    return 0;
}