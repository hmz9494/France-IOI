#include <iostream>
using namespace std ;
int main () {
    int surface1 , surface2 ;
    cin >> surface1 >> surface2 ;
    if (surface1 - surface2 > 10)
        cout << "La famille Arignon a un champ trop grand" << endl ;
    if (surface2 - surface1 > 10)
        cout << "La famille Evaran a un champ trop grand" << endl ;
}
