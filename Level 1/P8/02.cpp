#include <iostream>
using namespace std ;
int main () {
    int somme = 0 ;
    int depense ;
    cin >> depense ;
    while (depense != -1) {
        somme = somme + depense ;
        cin >> depense ;
    }
    cout << somme ;
}

