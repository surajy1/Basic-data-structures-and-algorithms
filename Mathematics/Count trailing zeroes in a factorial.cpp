#include <bits/stdc++.h>
using namespace std;

//Count trailing zeroes in a factorial
/*
	Input1: 5
	Output1: 1
	
	Input2: 10
	Output: 2
	
	Input3: 251
	Output: 62
*/
int countTrailingZeroes(int n){

    int res = 0;

    for(int i=5; i<=n; i*=5)
        res = res + (n/i);

    return res;
}

int main() {
	
	int a;
    cin >> a;

    cout << countTrailingZeroes(a);
	
	return 0;
}
