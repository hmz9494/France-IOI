#include <iostream>
#include <string>
using namespace std ;
int main () {
    string texte ;
    getline(cin , texte) ;
    int longueur = texte.length() ;
    for (int i=0 ; i<longueur ; i++)
        cout << texte[i] << endl ;
}
