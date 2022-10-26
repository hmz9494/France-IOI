#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbMonteesDescentes ;
    cin >> nbMonteesDescentes ;
    int sommeMontee = 0 ;
    int sommeDescente = 0 ;
    repeat(nbMonteesDescentes) {
        int altitude ;
        cin >> altitude ;
        if (altitude < 0)
            sommeDescente = sommeDescente + altitude ;
        else
            sommeMontee = sommeMontee + altitude ;
    }
    cout << sommeMontee << endl ;
    cout << -sommeDescente << endl ;
}
