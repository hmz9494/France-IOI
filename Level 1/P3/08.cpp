#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int compte = 100 ;
    repeat(101) {
        cout << compte << endl;
        compte = compte - 1 ;
    }
    cout << "Décollage !" << endl;
}
