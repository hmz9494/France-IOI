#include <iostream>
using namespace std ;
int main () {
    int nbCharettes ;
    cin >> nbCharettes ;
    double poidsCharette[nbCharettes] ;
    double sommePoids = 0 ;
    for (int i=0 ; i<nbCharettes ; i++) {
        cin >> poidsCharette[i] ;
        sommePoids = sommePoids + poidsCharette[i] ;
    }
    double moyennePoids = sommePoids / nbCharettes ;
    for (int i=0 ; i<nbCharettes ; i++)
        cout << (moyennePoids - poidsCharette[i]) << endl ;
}
