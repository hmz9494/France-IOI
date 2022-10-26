#include <iostream>
#include <algorithm>
using namespace std ;
int main () {
    int nbParticipants ;
    cin >> nbParticipants ;
    int nombre[nbParticipants] ;
    for (int i=0 ; i<nbParticipants ; i++)
        cin >> nombre[i] ;
    sort(nombre , nombre + nbParticipants) ;
    for (int i=0 ; i<nbParticipants/2 ; i++)
        cout << nombre[i] << ' ' << nombre[nbParticipants-i-1] << endl ;
}
