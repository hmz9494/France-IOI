#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int compteur = 1 ;
    repeat(100) {
        cout << compteur << endl ;
        compteur = compteur + 1 ;
    }
    cout << "J'arrive !" << endl ;
}
