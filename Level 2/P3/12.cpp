#include <iostream>
#include <string>
using namespace std ;
int main () {
    string carte1 , carte2 ;
    cin >> carte1 >> carte2 ;
    int nbCartes1 = carte1.length() ;
    int nbCartes2 = carte2.length() ;
    int tour = 0 ;
    while (tour < nbCartes1 && tour < nbCartes2 && carte1[tour] == carte2[tour])
        tour = tour + 1 ;
    if (tour == nbCartes1 && tour == nbCartes2)
        cout << '=' << endl ;
    else if (tour == nbCartes1 || (tour < nbCartes2 && carte1[tour] > carte2[tour]))
        cout << '2' << endl ;
    else
        cout << '1' << endl ;
    cout << tour << endl ;
}
