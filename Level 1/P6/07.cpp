#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbMaisons ;
    cin >> nbMaisons ;
    int xMax = 0 , xMin = 1000000 ;
    int yMax = 0 , yMin = 1000000 ;
    repeat(nbMaisons) {
        int x , y ;
        cin >> x >> y ;
        if (x > xMax)
            xMax = x ;
        if (x < xMin)
            xMin = x ;
        if (y < yMin)
            yMin = y ;
        if (y > yMax)
            yMax = y ;
    }
    int perimetre = 2 * (xMax - xMin + yMax - yMin) ;
    cout << perimetre ;
}
