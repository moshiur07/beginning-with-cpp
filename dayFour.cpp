#include <iostream>
using namespace std;



int main(){

    // Objective : print a pattern for number N



    // int n = 4; 
    // for(int i=1 ; i <=n ; i++){

    //     for(int j=1 ; j <= n ; j++){
    //         cout << j ;
    //     }
    //     cout << endl;

    // }


//  for character


    // int n = 4; 

    // char ch ='A';

    // for(int i=0 ; i<n ;i++){
    //     char ch ='A';
    //     for(int j=0 ; j < n ;j++){
            
    //         cout << ch<<" " ;
    //         ch = ch + 1;
    //     }
    //     cout << endl;

    // }


    // int n = 3; //pattern declaration
    // int m =1;

    // for(int i=0 ; i<n ;i++){
        
    //     for(int j=0 ; j < n ;j++){
    //         cout<< m;
    //         m++;
    //     }
    //     cout << endl;

    // }



    // Objective : make a out of pattern number 3 with ABC non repeated in nested loop

    // int n=4;
    //  char ch = 'A';
    // for(int i = 0; i<n ; i++){
       
    //     for(int j=0; j<n; j++){
    //         cout<< ch << "  ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // objective ; print a triangle pattern using stars (*)


    // int  n = 6 ;
    //  for(int i =0 ; i < n; i++){

    //     for(int j=0; j<i+1 ; j++){
    //         cout << "*";
    //     }


    //  cout<<endl;
    //  }



    
    // print a triangle pattern with numbers

    // int n = 4; 
    // for(int i=0; i<n ; i++){


    //     for(int j=0 ; j< i+1 ; j++){
    //         cout << i+1;
    //     }

    //     cout<<endl;
    // }



    // print a triangle pattern with characters

    // int n = 4;
    // char ch= 'A' ;
    // for(int i=0; i<n ; i++){


    //     for(int j=0 ; j < i+1 ; j++){
    //         cout << ch << " " ;
           
    //     }
    //      ch++;

    //     cout<<endl;
    // }



    // problem number: X



// Option 1
    // int n = 4;
    // for(int i=0; i<n; i++){

    //     for(int j = 0; j<i+1; j++){

    //         for(int k = 1 ; k <= i+1; k++ ){
    //             cout << k;
    //         }
    //         break;
    //     }
    //     cout<< endl;
    // }


// option 2 : more optimized

    // int n = 4;
    // for(int i=0; i<n; i++){

    //     for(int j = 1; j<=i+1; j++){
    //         cout << j;
    //     }
    //     cout<< endl;
    // }







    // Objective: backward loop triangle



    int n= 4;
    for(int i = 0; i <n ; i++){
        for(int j= i+1; j>0; j--){
            cout<< j ;
        }

        cout<<endl;
    }


    return 0;
}