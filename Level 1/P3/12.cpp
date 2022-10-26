#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int sommeCubes = 0 ;
    int numCubes = 17 ;
    repeat(9) {
        sommeCubes = sommeCubes + (numCubes * numCubes * numCubes) ;
        numCubes = numCubes - 2 ;
    }
    cout << sommeCubes << endl ;
}
