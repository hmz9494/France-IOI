#include <iostream>
#include <string>
using namespace std ;
int main () {
    int nbLignes , nbMots ;
    cin >> nbLignes >> nbMots ;
    int nbMotsTotale = nbLignes * nbMots ;
    int longueurMots[101] ;
    for (int i=1 ; i<=100 ; i++)
        longueurMots[i] = 0 ;
    for (int i=1 ; i<=nbMotsTotale ; i++) {
        string mot ;
        cin >> mot ;
        int longueur = mot.length() ;
        longueurMots[longueur] = longueurMots[longueur] + 1 ;
    }
    for (int i=1 ; i<=100 ; i++) {
       if (longueurMots [i] != 0) 
            cout << i << " : " << longueurMots[i] << endl ;
    }
}


