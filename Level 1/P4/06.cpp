#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbNombres ;
    cin >> nbNombres ;
    int iNombre = 1 ;
    int produit = 66 ;
    repeat(nbNombres) {
        produit = produit * iNombre ;
        cout << produit << endl ;
        iNombre = iNombre + 1 ;
    }
}
