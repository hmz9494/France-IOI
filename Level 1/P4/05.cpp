#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int tempMin , tempMax ;
    cin >> tempMin >> tempMax ;
    int ecart = tempMax - tempMin + 1 ;
    int iGraduation = tempMin  ;
    repeat(ecart) {
        cout << iGraduation << endl ;
        iGraduation = iGraduation + 1 ;
    }
}
