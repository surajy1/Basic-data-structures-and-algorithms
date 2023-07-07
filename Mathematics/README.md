# Mathematics

## [Check if a NUMBER is a palindrome](/Mathematics/Check%20if%20a%20NUMBER%20is%20a%20palindrome.cpp)
Code:
```cpp
//Check if a given number is a palindrome
bool isPal(int n){

    int rev = 0;
    int temp = n;

    while (temp != 0)
    {
        int lastDigit = temp % 10;

        rev = rev * 10 + lastDigit;

        temp /= 10;
    }
    return (rev == n);
}
```

## [Factorial of a number](/Mathematics/Factorial%20of%20a%20number.cpp)
Code:
```cpp
int fact(int n){

    int res = 1;

    for(int i = 2; i <= n; i++)
        res *= i;

    return res;
}
// TC: O(n)
```

## [Count trailing zeroes in a factorial](/Mathematics/Count%20trailing%20zeroes%20in%20a%20factorial.cpp)
Code:
```cpp
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

    for(int i = 5; i <= n; i *= 5)
        res = res + (n/i);

    return res;
}
```

## [GCD of two numbers](/Mathematics/GCD%20of%20two%20numbers.cpp)
Code:
```cpp
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

    if(b == 0) 
        return a;

    else 
        return gcd(b, a % b);
}
```

## [LCM of two numbers (recursive solution)](/Mathematics/LCM%20of%20two%20numbers%20(recursive%20solution).cpp)
Code:
```cpp
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

    if(b == 0) 
        return a;
    else 
        return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

// TC: O(log(min(a, b)))
/*********************/
```