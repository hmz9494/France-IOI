#include <iostream>
#include <string>
using namespace std ;
int main () {
    string ligne ;
    getline(cin , ligne) ;
    int longueur = ligne.length() ;
    for (int i=0 ; i<longueur ; i++) {
        if (ligne[i] == ' ')
            ligne[i] = '_' ;
    }
    cout << ligne ;
}
