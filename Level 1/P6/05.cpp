#include <iostream>
using namespace std ;
int main () {
    int hauteur , nbFolioles ;
    cin >> hauteur >> nbFolioles ;
    if (hauteur <= 8) {
        if (nbFolioles >= 8) {
            cout << "Tinuviel" << endl ;
        }
        else {
            cout << "Falarion" << endl ;
        }
    }
    else {
        if (nbFolioles >= 10) {
            cout << "Calaelen" << endl ;
        }
        else {
            cout << "Dorthonion" << endl ; 
        }
    }
}
