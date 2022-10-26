#include <iostream>
using namespace std ;
int main () {
    int populationActuelle ;
    double croissance ;
    cin >> populationActuelle >> croissance ;
    int res = populationActuelle + populationActuelle * croissance / 100 ;
    cout << res ; 
}
