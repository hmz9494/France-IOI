#include <iostream>
using namespace std ;
int main () {
    int nbZones ;
    cin >> nbZones ;
    int numZone = nbZones % 24 ;
    if (numZone < 0)
        numZone = numZone + 24 ;
    cout << numZone ;
}
