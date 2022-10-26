#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbMarchands ;
    cin >> nbMarchands ;
    int iMarchand = 1 ;
    int maxPos = 1 ;
    int prixMin = 1000000 ;
    repeat(nbMarchands) {
        int prix ;
        cin >> prix ;
        if (prix <= prixMin) {
            maxPos = iMarchand ;
            prixMin = prix ;
        }
        iMarchand = iMarchand + 1 ; 
    }
    cout << maxPos ;
}
