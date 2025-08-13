// day three homework:
// hw 1: sum all the number from 1 to N which are divisible by 3
// hw-2: Print factorial of a number N



#include <iostream>
using namespace std;


int main(){

    // hw 1: sum all the number from 1 to N which are divisible by 3

    // int n = 15 ;

    // int sum = 0;

    // for(int i=1 ; i <=n ; i++){
    //     if( i % 3 == 0){
    //         sum += i;
    //     }
    // }

    // cout << sum ;



    // hw-2: Print factorial of a number N

    int x = 5;
    
    double  factorialValue = 1 ;

    for(int i=1 ; i<=x ; i++){
        factorialValue *= i;
    }
     cout << factorialValue; 




    return 0 ;
}