#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbMembres ;
    cin >> nbMembres ;
    int somme1 = 0 ;
    int somme2 = 0 ;
    repeat(nbMembres) {
        int poids1 , poids2 ;
        cin >> poids1 >> poids2 ;
        somme1 = somme1 + poids1 ;
        somme2 = somme2 + poids2 ;
    }
    if (somme1 > somme2) 
        cout << "L'équipe 1 a un avantage" << endl ;
    else
        cout << "L'équipe 2 a un avantage" << endl ;
    cout << "Poids total pour l'équipe 1 : " << somme1 << endl ;
    cout << "Poids total pour l'équipe 2 : " << somme2 << endl ;
}
