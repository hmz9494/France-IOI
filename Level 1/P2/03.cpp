#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++) 
using namespace std ;
int main () {
    gauche() ;
    gauche() ;
    cout << "Bonjour, laissez-moi vous aider" << endl ;
    ramasser() ;
    repeat(32) {
        droite() ;
    }
    deposer () ;
}
