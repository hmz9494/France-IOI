#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int dateDebut , dateFin , nbInvites ;
    cin >> dateDebut >> dateFin >> nbInvites ;
    int nbSuspects = 0 ; 
    repeat(nbInvites) {
        int dateArrivee , dateDepart ;
        cin >> dateArrivee >> dateDepart ;
        bool pasInter = (dateArrivee > dateFin) || (dateDepart < dateDebut) ;
        if (!pasInter) {
            nbSuspects = nbSuspects + 1 ;
        }
    }
    cout << nbSuspects ;
}
