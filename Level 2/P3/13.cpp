#include <iostream>
#include <string>
using namespace std ;
int main () {
    char lettre ;
    int nbLignes ;
    cin >> lettre >> nbLignes ;
    int nbOcc = 0 ;
    cin.ignore() ;
    for (int i=0 ; i<nbLignes ; i++) {
        string ligne ;
        getline(cin , ligne) ;
        int longueur = ligne.length() ;
        for (int j=0 ; j<longueur ; j++) {
            if (ligne[j] == lettre)
                nbOcc = nbOcc + 1 ;
        }
    }
    cout << nbOcc ; 
}
