#include <iostream>
using namespace std ;
int main () {
    int nbPierres ;
    cin >> nbPierres ;
    int sommePierres = 0 ;
    bool continuer = 1 ;
    int hauteur = 0 ;
    while (continuer) {
        nbPierres = nbPierres - (hauteur+1) * (hauteur+1) ;
        if (nbPierres < 0) {
            continuer = 0 ;
        }
        else {
            sommePierres = sommePierres + (hauteur+1) * (hauteur+1) ;
            hauteur = hauteur + 1 ;
        }
    }
    cout << hauteur << endl << sommePierres ;
}
