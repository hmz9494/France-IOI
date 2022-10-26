#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbTotalKarvas = 0 ;
    repeat(20) {
        int nbKarvas ;
        cin >> nbKarvas ;
        nbTotalKarvas = nbTotalKarvas + nbKarvas ;
    }
    cout << nbTotalKarvas << endl ;
}
