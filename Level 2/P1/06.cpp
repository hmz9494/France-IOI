#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    double quantiteCiment ;
    cin >> quantiteCiment ;
    int nbSacs = ceil(quantiteCiment / 60) ;
    cout << nbSacs * 45 ;
}
