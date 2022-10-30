#include <bits/stdc++.h>
using namespace std;

//Count trailing zeroes in a factorial
int countTrailingZeroes(int n){

    int res = 0;

    for(int i=5; i<=n; i*=5)
        res+= (n/i);

    return res;
}

int main() {
	
	int a;
    cin >> a;

    cout << countTrailingZeroes(a);
	
	return 0;
}
