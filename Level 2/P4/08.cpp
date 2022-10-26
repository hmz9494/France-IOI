#include <iostream>
using namespace std ;
void ligne (int longueur , char motif) {
    for (int i=0 ; i<longueur ; i++)
        cout << motif ;
    cout << endl ;
}
void ligneCreuse (int longueur , char motif) {
    cout << motif ;
    for (int i=1 ; i<longueur - 1 ; i++)
        cout << ' ' ;
    cout << motif << endl ;
}
void rectangle (int nbLignes , int nbColonnes , char motif) {
    if (nbColonnes == 1) {
       for (int i=0 ; i<nbLignes ; i++)
          cout << motif << endl ;
    }
    else {
        ligne(nbColonnes , motif) ;
        for (int i=2 ; i<nbLignes ; i++) 
            ligneCreuse(nbColonnes , motif) ;
        ligne(nbColonnes , motif) ;
        cout << endl ;
    }
}
void triangle (int nbLignes , char motif) {
    if (nbLignes >= 3) {
        cout << motif << endl ;
        cout << motif << motif << endl ;
        int espace = 3 ;
        for (int i=0 ; i<nbLignes - 3 ; i++) {
            ligneCreuse(espace , motif) ;
            espace = espace + 1 ;
        }
        ligne(nbLignes , motif) ;
    }
    else if (nbLignes == 1) {
        cout << motif ;
    }
    else {
        cout << motif << endl ;
        cout << motif << motif << endl ;
    }
}
int main () {
    int nbX , nbLignes , nbColonnes , nbLignesTriangle ;
    cin >> nbX >> nbLignes >> nbColonnes >> nbLignesTriangle ;
    ligne(nbX , 'X') ;
    cout << endl ;
    rectangle(nbLignes , nbColonnes , '#') ;
    triangle(nbLignesTriangle , '@') ;
}

