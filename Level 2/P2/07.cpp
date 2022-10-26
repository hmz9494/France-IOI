#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std ;
int main () {
    int nbHabitants ;
    cin >> nbHabitants ;
    int fortune[nbHabitants] ;
    for (int i=0 ; i<nbHabitants ; i++) 
        cin >> fortune[i] ;
    sort(fortune , fortune + nbHabitants) ;
    if (nbHabitants % 2 != 0)
        cout << fortune[nbHabitants / 2] ;
    else 
        cout << ((fortune[nbHabitants / 2 - 1] + fortune[nbHabitants / 2]) / 2.0) << endl ;

}
