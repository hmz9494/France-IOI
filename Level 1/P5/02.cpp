#include <iostream>
using namespace std ;
int main () {
    int borne1 , borne2 ;
    cin >> borne1 >> borne2 ;
    int ecart = borne1 - borne2 ;
    if (ecart < 0)
        ecart = -ecart ;
    cout << ecart << endl ;
}
