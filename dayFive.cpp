#include <iostream> 
using namespace std ;
 

int main(){

int n = 4;
    for(int i=0; i<n; i++){

        for(int j = 0; j<i+1; j++){

            for(int k = 1 ; k <= i+1; k++ ){
                cout << k;
            }
            break;
        }
        cout<< endl;
    }

    return 0;
}