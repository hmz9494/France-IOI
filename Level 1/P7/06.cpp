#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbPaires ;
    cin >> nbPaires ;
    repeat(nbPaires) {
        int xMin1 , xMax1 , yMin1 , yMax1 ;
        int xMin2 , xMax2 , yMin2 , yMax2 ;
        cin >> xMin1 >> xMax1 >> yMin1 >> yMax1 ;
        cin >> xMin2 >> xMax2 >> yMin2 >> yMax2 ;
        if ( (xMax1 <= xMin2) || (xMax2 <= xMin1) || (yMax1 <= yMin2) || (yMax2 <= yMin1) )
            cout << "NON" << endl ;
        else
            cout << "OUI" << endl ;
    }
}
