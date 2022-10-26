#include <iostream>
using namespace std ;
void demandeCode () {
    int code ;
    cout << "Entrez le code : " << endl ;
    cin >> code ;
    while (code != 4242) {
        cout << "Entrez le code : " << endl ;
        cin >> code ;
    }
}
int main () {
    demandeCode () ;
    cout << "Encore une fois." << endl ;
    demandeCode () ;
    cout << "Bravo." << endl ;
}
