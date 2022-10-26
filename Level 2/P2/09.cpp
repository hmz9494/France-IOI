#include <iostream>
using namespace std ;
int main () {
    int nbPositions , nbChangements ;
    cin >> nbPositions >> nbChangements ; 
    int position[nbPositions] ;
    for (int i=0 ; i<nbPositions ; i++) 
        cin >> position[i] ;
    for (int i=0 ; i<nbChangements ; i++) {
        int position1 , position2 ;
        cin >> position1 >> position2 ;
        int tmp = position[position1] ;
        position[position1] = position[position2] ;
        position[position2] = tmp ;
    }
    for (int i=0 ; i<nbPositions ; i++)
        cout << position[i] << endl ; 
}
