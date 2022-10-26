#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbkarvas ;
    cin >> nbkarvas ;
    repeat(nbkarvas) {
        int poids , age ;
        int longueurcorne , hauteurgarrot ;
        cin >> poids >> age >> longueurcorne >> hauteurgarrot ;
        cout << (longueurcorne * hauteurgarrot + poids) << endl ;
    }
}
