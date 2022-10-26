#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbCrapauds = 1337;
    repeat(12) {
        nbCrapauds = nbCrapauds * 2 ;
    }
    cout << nbCrapauds << endl;
}
