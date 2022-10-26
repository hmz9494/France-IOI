#include <iostream>
using namespace std ;
int main () {
    int dateDebut1 , dateFin1 ;
    int dateDebut2 , dateFin2 ;
    cin >> dateDebut1 >> dateFin1 >> dateDebut2 >> dateFin2 ;
    if ( (dateDebut1 > dateFin2) || (dateFin1 < dateDebut2) )
        cout << "Pas amis" ;
    else
        cout << "Amis" ;
}
