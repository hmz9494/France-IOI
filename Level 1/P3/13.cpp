#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int num = 1 ;
    repeat(20) {
        int iNum = 1 ;
        repeat(20) {
            cout << (num * iNum) << " " ;
            iNum = iNum + 1 ;
        }
        cout << endl ;
        num = num + 1 ; 
    }
}
