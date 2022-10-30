#include <bits/stdc++.h>
using namespace std;

//Check if a given number is a palindrome
bool isPal(int n){

    int rev = 0;
    int temp = n;

    while (temp!=0)
    {
        int lastDigit = temp % 10;

        rev = rev*10 + lastDigit;

        temp/=10;
    }
    return (rev==n);
}

int main() {
	
    int a;
    cin >> a;

    cout << isPal(a);
	
	return 0;
}
