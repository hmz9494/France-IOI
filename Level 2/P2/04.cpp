#include <iostream>
using namespace std ;
int main () {
    int nbProduits , nbPersonnes ;
    cin >> nbProduits >> nbPersonnes ;
    int numProduit[1000] ;
    int nombrePersonnes[nbProduits] = {0} ;
    for (int i=0 ; i<nbPersonnes ; i++)
        cin >> numProduit[i] ;
    for (int i=0 ; i<nbPersonnes ; i++) 
        nombrePersonnes[numProduit[i]] = nombrePersonnes[numProduit[i]] + 1 ;
    for (int i=0 ; i<nbProduits ; i++)
        cout << nombrePersonnes[i] << endl ;
}
