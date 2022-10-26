#include <iostream>
using namespace std ;
int main () {
    int age , poidsBagages ;
    cin >> age >> poidsBagages ;
    int prix ;
    if (age == 60) 
        prix = 0 ;
    else {
        if (age < 10) 
            prix = 5 ;
        else {
            prix = 30 ;
            if (poidsBagages >= 20)
                prix = prix + 10 ;
        }
    }
    cout << prix << endl ;
}
