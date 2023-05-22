# Mathematics

## [Factorial of a number](/Mathematics/Factorial%20of%20a%20number.cpp)
Code:
```cpp
int fact(int n){

    int res = 1;

    for(int i=2; i<=n; i++)
        res*=i;

    return res;
}
// TC: O(n)
```