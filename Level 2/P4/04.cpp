#include <iostream>
using namespace std ;
void affichage (int nbLignes , int nbColonnes , char motif) {
    for (int i=0 ; i<nbLignes ; i++) {
        for (int j=0 ; j<nbColonnes ; j++) {
            cout << motif ;
        }
        cout << endl ;
    }
}
int main () {
    int nbLignes , nbColonnes ;
    char motif ;
    cin >> nbLignes >> nbColonnes >> motif ;
    affichage(nbLignes , nbColonnes , motif) ;
}
