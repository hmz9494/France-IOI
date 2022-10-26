#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbBonbons = 1 ;
    int iTirs = 2 ;
    repeat(50) {
        cout << nbBonbons << endl ;
        nbBonbons = nbBonbons + iTirs ;
        iTirs = iTirs + 1 ;
    }
}
