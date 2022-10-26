#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    double taxeActuelle , nouvelleTaxe , prix ;
    cin >> taxeActuelle >> nouvelleTaxe >> prix ;
    double prixSansTaxe = prix * (100 / (100 + taxeActuelle)) ;
    double prixAvecTaxe = prixSansTaxe * (1 + (nouvelleTaxe / 100)) ;
    double nouveauPrix = round(prixAvecTaxe * 100) / 100 ;
    cout << nouveauPrix ;
}
