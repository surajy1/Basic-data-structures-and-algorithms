#include <bits/stdc++.h>
using namespace std;

/*********************/
// LCM of two numbers
/*
    Input 1: a = 4, b = 6
    Output 1: 12

    Input 2: a = 12, b = 15
    Output 2: 60

    Input 3: a = 2, b = 8
    Output 2: 8
*/

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
