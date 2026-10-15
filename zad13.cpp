#include <iostream>
using namespace std;

int main() {
    int minuty;
    cout << "Podaj liczbe minut: ";
    cin >> minuty;

    int godziny = minuty / 60;
    int reszta_minuty = minuty % 60;

    cout << godziny << " godz. " << reszta_minuty << " min." << endl;
    return 0;
}
