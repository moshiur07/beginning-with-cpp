#include <iostream>
using namespace std;

int main(){

    // Objective - 1 :  i will take a number from user and return him the factorial value of it
    // int n = 10 ;
    // cout<< "enter a integer  :" ;
    // cin >> n ;
    // int factValue = 5 * (5-1) * (5-2) * (5-3) * (5-4) ; 
    // int factValue = 1 ; 
    // for ( int i = n ; i > 0 ; i-- ){
    //     factValue *= i ;
    // }
    // cout << factValue ;





//  Objective-2: i need the some of all the odd number from 0 to n using while loop

    int n = 10 ;
    // cout<<"enter of the value of N : ";
    // cin >> n ;
    int oddSum=0;
    int i=0;
    while(i<=n){

        if(i%2 != 0){
            oddSum += i ;
        }
        i++;
    }
    cout << "The sum of all odd number from 0 to N is : " << oddSum << "\n";

 
//  Objective-2: i need the some of all the even number from 0 to n using for loop 


    int evenSum= 0 ;
    for (int i = 0 ; i <= n ; i++)
    {
        if(i%2 == 0 ){
            evenSum +=i ;
        }
    }
    cout <<"The sum of all even number from 0 to N is :"<< evenSum ;
    

    return 0;
}