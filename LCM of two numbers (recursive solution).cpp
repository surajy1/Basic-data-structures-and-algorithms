#include <bits/stdc++.h>
using namespace std;

/*********************/
// LCM of two numbers

int gcd(int a, int b){

    if(b==0) 
        return a;

    else 
        return gcd(b, a%b);

}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

// TC: O(log(min(a, b)))
/*********************/

int main() {
	
	int a, b;
    cin >> a >> b;

    cout << lcm(a, b);
	
	return 0;
}
