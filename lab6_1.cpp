#include<iostream>
using namespace std;

int main(){
    int N ;
    int E = 0, O = 0;
    
    while ( N != 0 ){
        cout << "Enter an integer: ";
        cin >> N;
        if (N % 2 != 1){
            E++;
        }else{
            O++;
        }
    }
    
    cout << "#Even numbers = "<< E-1 << endl ;
    cout << "#Odd numbers = "<< O ;
    return 0;
}
