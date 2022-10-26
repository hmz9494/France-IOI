#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    repeat(20) {
        ramasser() ;
        repeat(15) {
            droite() ;
        }
        deposer() ;
        repeat(15) {
            gauche() ;
        }
    }
}
