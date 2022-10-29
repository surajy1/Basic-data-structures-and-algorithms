#include <iostream>
using namespace std;

//Function to check if a number is a prime
/**********************************/
bool isPrime(int n){
    if(n==1) return false;

    if(n==2 || n==3) return true;

    if(!(n%2) || !(n%3))
        return false;

    for(int i=5; i*i<=n; i+=6)
        if(!(n%i) || !(n%(i+2)))
            return false;
    
    return true;
}
/**********************************/

int main(){

    int n;

    cin >> n;

    cout << isPrime(n);

    return 0;
}
