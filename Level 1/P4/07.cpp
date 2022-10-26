#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int positionDepart , largeurEmplacement , nbVendeurs ;
    cin >> positionDepart >> largeurEmplacement >> nbVendeurs ;
    cout << positionDepart << endl ;
    repeat(nbVendeurs) {
        positionDepart = positionDepart + largeurEmplacement ;
        cout << positionDepart << endl ;
    }
}
