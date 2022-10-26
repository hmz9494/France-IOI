#include <iostream>
#include <string>
using namespace std ;
int main () {
    int nbLivres , longueurMinimale ;
    cin >> nbLivres >> longueurMinimale ;
    cin.ignore() ;
    for (int idLivre = 1 ; idLivre <= nbLivres ; idLivre++) {
        string titreLivre , resumeLivre ; 
        getline(cin , titreLivre) ;
        getline(cin , resumeLivre) ;
        int longueurResume = resumeLivre.length() ;
        if (longueurResume < longueurMinimale)
            cout << titreLivre << endl ;
    }
}
