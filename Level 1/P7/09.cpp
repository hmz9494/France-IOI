#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbPersonnes ;
    cin >> nbPersonnes ;
    repeat(nbPersonnes) {
        int nbCriteres = 0 ;
        int taille , age , poids , aCheval , aCheveuxBruns ;
        cin >> taille >> age >> poids >> aCheval >> aCheveuxBruns ;
        if ( (taille >= 178) && (taille <= 182) )
            nbCriteres = nbCriteres + 1 ;
        if (age >= 34) 
            nbCriteres = nbCriteres + 1 ;
        if (poids < 70)
            nbCriteres = nbCriteres + 1 ;
        if (aCheval == 0)
            nbCriteres = nbCriteres + 1 ;
        if (aCheveuxBruns == 1)
            nbCriteres = nbCriteres + 1 ;
        if (nbCriteres == 5)
            cout << "Très probable" << endl ;
        else if ( (nbCriteres == 3) || (nbCriteres == 4) )
            cout << "Probable" << endl ;
        else if (nbCriteres == 0)
            cout << "Impossible" << endl ;
        else
            cout << "Peu probable" << endl ;
    }
}
