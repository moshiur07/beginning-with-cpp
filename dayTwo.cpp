#include <iostream>
using namespace std;





int main() {
    char ch;
    int n = 0;
    cout<< n << "\n";
    cout << "enter a character : \n";
    cin >> ch ;
    // char ab = 'a';
    // cout <<int(ab) << "\n" ;       
    int n = int(ch);
    cout<< n << "\n";

    if(n>65 && n<97){
        cout << "Uppercase";
    }else{cout<<"Lowercase";}

    

    // if(age>= 18){
    //     cout << "Congrats! Youre eligible for National Voting";
    // }
    // else cout<<"Sorry, Youre not eligible for vote" <<endl ; 

    return 0;
}