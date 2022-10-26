#include <iostream>
#include <string>
using namespace std ;
int main () {
    string titre , nom ;
    getline(cin , titre) ;
    getline(cin , nom) ;
    int longueur = titre.length() ;
    for (int i=0 ; i<longueur ; i++) {
        if (titre[i] != 'A' && titre[i] != 'E' && titre[i] != 'O' && titre[i] != 'U' && titre[i] != 'I' && titre[i] != ' ' && titre[i]!= 'Y')
            cout << titre[i] ;
    }
    cout << endl ;
    longueur = nom.length() ;
    for (int i=0 ; i<longueur ; i++) {
        if (nom[i] != 'A' && nom[i] != 'E' && nom[i] != 'O' && nom[i] != 'U' && nom[i] != 'I' && nom[i] != 'Y'&& nom[i] != ' ') 
            cout << nom[i] ; 
    }
}
