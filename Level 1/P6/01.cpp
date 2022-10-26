#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbLieux ;
    cin >> nbLieux ;
    int nbVilles = 0 ;
    repeat(nbLieux) {
        int population ;
        cin >> population ;
        if (population > 10000)
            nbVilles = nbVilles + 1 ;
    }
    cout << nbVilles ;
}
