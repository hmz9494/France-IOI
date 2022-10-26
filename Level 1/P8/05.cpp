#include <iostream>
using namespace std ;
int main () {
    int nbMesures , tempMin , tempMax ;
    cin >> nbMesures >> tempMin >> tempMax ;
    bool continuer = 1 ;
    int indice = 0 ;
    while (continuer) {
        int temp ;
        cin >> temp ;
        if (temp >= tempMin && temp <= tempMax)
            cout << "Rien à signaler" << endl ;
        else {
            cout << "Alerte !!" << endl ;
            continuer = 0 ;
        }
        indice = indice + 1 ; 
        if (indice == nbMesures)
            continuer = 0 ;
    }
}
