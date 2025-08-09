#include <iostream>
using namespace std;

int main(){

    // i will take a number from user and return him the factorial value of it
    int n ;
    cout<< "enter a integer  :" ;
    cin >> n ;

    // int factValue = 5 * (5-1) * (5-2) * (5-3) * (5-4) ; 

    int factValue = 1 ; 

    for ( int i = n ; i > 0 ; i-- ){
        factValue *= i ;
    }


    cout << factValue ;


    return 0;
}