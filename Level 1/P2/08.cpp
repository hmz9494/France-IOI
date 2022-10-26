#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    repeat(108) {
        repeat(13) {
            haut() ;
        }
        repeat(13) {
            droite() ;
        }
        repeat(13) {
            bas() ;
        }
        repeat(13) {
            gauche() ;
        }
    }
}
