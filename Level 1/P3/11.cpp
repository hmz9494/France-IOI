#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int numAnneau = 1 ;
    repeat(10) {
        repeat(numAnneau) {
            droite() ;
        }
        ramasser() ;
        repeat(numAnneau) {
            gauche() ;
        }
        deposer() ;
        numAnneau = numAnneau + 1 ; 
    }
}
