#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int dateDebut , dateFin , nbEntrees ;
    cin >> dateDebut >> dateFin >> nbEntrees ;
    int nbEspions = 0 ;
    repeat(nbEntrees) {
        int dateEntree ;
        cin >> dateEntree ;
        if ( (dateEntree >= dateDebut) && (dateEntree <= dateFin) ) {
            nbEspions = nbEspions + 1 ;
        }
    }
    cout << nbEspions ;
}
