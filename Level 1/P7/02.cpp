#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int xMin , xMax , yMin , yMax , nbTotalMaisons ;
    cin >> xMin >> xMax >> yMin >> yMax >> nbTotalMaisons ;
    int nbMaisons = 0 ;
    repeat(nbTotalMaisons) {
        int x , y ;
        cin >> x >> y ;
        if ( (x >= xMin) && (x <= xMax) && (y >= yMin) && (y <= yMax) )
            nbMaisons = nbMaisons + 1 ; 
    }
    cout << nbMaisons ;
}
