#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++) 
using namespace std ;
int main () {
    droite() ;
    repeat(15) {
        ramasser() ;
        droite() ;
    }
    deposer() ;
}
