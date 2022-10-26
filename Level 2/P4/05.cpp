#include <iostream>
using namespace std ;
int min2 (int nombre1 , int nombre2) {
    if (nombre1 > nombre2)
        return nombre2 ;
    return nombre1 ;
}
int main () {
    int nombre[10] ;
    int min = 10000;
    for (int i=0 ; i<10 ; i++) {  
        cin >> nombre[i] ;
        min = min2(min , nombre[i]) ;
    }
    cout << min << endl ;
}
