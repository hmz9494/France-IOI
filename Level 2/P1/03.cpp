#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbLegumes ;
    cin >> nbLegumes ;
    repeat(nbLegumes) {
        double poids , age , prixVente ;
        cin >> poids >> age >> prixVente ;
        cout << prixVente / poids << endl ; 
    }
}
