#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbPersonnes ;
    cin >> nbPersonnes ;
    int maxI = 0 ;
    int max = 0 ;
    repeat(nbPersonnes * 2) {
        int date ;
        cin >> date ;
        if (date > 0)
            maxI = maxI + 1 ;
        else
            maxI = maxI - 1 ;
        if (maxI > max)
            max = maxI ;
    }
    cout << max ;
}

