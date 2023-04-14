#include <bits/stdc++.h>
using namespace std;

/*********************/
// GDC/HCF of two numbers
/*
    Input 1: a = 4, b = 6
    Output 1: 2

    Input 2: a = 100, b = 200
    Output 2: 100

    Input 3: a = 7, b = 13
    Output 2: 1
*/

int gcd(int a, int b){

    if(b==0) 
        return a;

    else 
        return gcd(b, a%b);

}

/*********************/

int main() {
	
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b);
	
	return 0;
}
