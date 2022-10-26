#include <iostream>
#include <string>
using namespace std ;
int main () {
    int nbLivres ;
    cin >> nbLivres ;
    cin.ignore() ;
    int maxLongueur = -1 ;
    for (int idLivre=0 ; idLivre<nbLivres ; idLivre++) {
        string titre ;
        getline(cin , titre) ;
        int longueurTitre = titre.length() ;
        if (longueurTitre > maxLongueur) {
            cout << titre << endl ;
            maxLongueur = longueurTitre ;
        }
    }
}
