#include <iostream>
#include <string>
using namespace std ;
int main () {
    for (int iLivre=0 ; iLivre<6 ; iLivre++) {
        string nomAuteur , titreLivre ;
        getline(cin , nomAuteur) ;
        getline(cin , titreLivre) ;
        cout << titreLivre << endl ;
        cout << nomAuteur << endl ;
    }
}
