# Extra Data Structures and Algorithms
## Hashing
1. [Map - Count the frequencie (occurances) of integers](https://github.com/y-suraj/C-Plus-Plus-Practicals-and-Tests/blob/main/C%2B%2B%20STL/Maps/Example%201%20-%20Map%20-%20Count%20the%20frequencies%20of%20integers.cpp)
> Time complexity of map(storing and fetching) = **(log N)**, for all test case including **best, average and worst** where N is the number of elements in the map
<details>
	<summary>
```cpp
#include <iostream>
#include <map>
using namespace std;

/*
Input: 
7
1 2 3 1 3 2 12
5
1
2
3
4
12

Output:
1->2
2->2
3->2
12->1
2
2
2
0
1
*/
// Time complexity of map(storing and fetching) = (log N), for all test case including best, average and worst
// where N is the number of elements in the map
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    map<int, int> mpp;
    // map<key_type, value_type>
    // for characters: map<char, int>

    // pre-compute
    for (int i = 0; i < n; i++) {
      mpp[a[i]]++;
    }

    // iterate in the map
    for (auto it : mpp)
      cout << it.first << "->" << it.second << endl;

    // queries for frequencies
    int q; cin >> q;
    while (q--) {
      int num;
      cin >> num;
      cout << mpp[num] << "\n";
    }

    return 0;
}
```
	</summary>
</details>
2. [Unordered Map - Count the frequencie (occurances) of integers](https://github.com/y-suraj/C-Plus-Plus-Practicals-and-Tests/blob/main/C%2B%2B%20STL/Maps/Example%202%20-%20Unordered%20Map%20-%20Count%20the%20frequencies%20of%20integers.cpp)
> Time complexity of unordered map(storing and fetching): = **O(1) for average and best cases, and = O(N) for worst cases**, where N is the number of elements in the map
