## Question 2: Inverted right triangle pattern with given start number

### Output:
<img width="356" height="222" alt="Screenshot 2025-10-07 145329" src="https://github.com/user-attachments/assets/cce8bb52-53e4-4d73-b0cd-fe5ab3e2d4f0" />

## In c++
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n,start;
    cin>>n>>start;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }

    return 0;
}
```

## In python
```python

n= int(input())
start= int(input())

for i in range(n):
    for j in range(n-i):
        print(start,end=' ')
        start+=1
    print()
```
