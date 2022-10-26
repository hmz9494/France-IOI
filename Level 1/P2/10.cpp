#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    haut() ;
    repeat(4) {
        repeat(8) {
            haut() ;
        }
        droite() ;
        repeat(8) {
            bas() ;
        }
        droite() ;
    }
    repeat(8)
        haut() ;
    droite() ;
    repeat(9)
        bas() ;
    repeat(9) {
        gauche() ;
    }
}
