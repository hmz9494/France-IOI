#include <iostream>
using namespace std ;
void demandeCode (int code) {
    int tentative ;
    do {
        cout << "Entrez le code : " << endl ;
        cin >> tentative ;
    } while (tentative != code) ;
}
int main () {
    demandeCode(4242) ;
    cout << "Premier code bon." << endl ;
    demandeCode(2121) ;
    cout << "Bravo." << endl ;
}
