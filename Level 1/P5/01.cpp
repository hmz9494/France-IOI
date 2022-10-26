#include <iostream>
using namespace std ;
int main () {
    int nbPaquets , poids ;
    cin >> nbPaquets >> poids ;
    if (nbPaquets * poids > 105)
        cout << "Surcharge !" << endl; 
}
