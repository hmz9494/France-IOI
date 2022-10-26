#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++) 
using namespace std ;
int main () {
    double epaisseur = 0.110 ;
    repeat(15) 
        epaisseur = epaisseur * 2 ;
    cout << epaisseur / 10 ;
}
