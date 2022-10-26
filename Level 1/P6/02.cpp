#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int positionActuelle , nbVillages ;
    cin >> positionActuelle >> nbVillages ;
    int nbVilles = 0 ;
    repeat(nbVillages) {
        int position ;
        cin >> position ;
        int ecart = position - positionActuelle ;
        if (ecart < 0) 
            ecart = -ecart ;
        if (ecart <= 50)
            nbVilles = nbVilles + 1 ;
    }
    cout << nbVilles << endl ;
}
