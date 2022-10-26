#include <bits/stdc++.h>
using namespace std;

//Factorial function
int fact(int n){

    int res = 1;

    for(int i=2; i<=n; i++)
        res*=i;

    return res;
}

int main() {
	
	int a;
    cin >> a;

    cout << fact(a);
	
	return 0;
}
