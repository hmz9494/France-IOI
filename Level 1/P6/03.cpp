#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbJours ;
    cin >> nbJours ;
    int max = 0 ;
    repeat(nbJours) {
        int distance ;
        cin >> distance ;
        if (distance > max)
            max = distance ; 
    }
    cout << max << endl ;
}
