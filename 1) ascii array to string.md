## Question 3: Ascii array to string

### Output:
balaji
## In c++
```cpp
#include <iostream>
using namespace std;
int main()
{
    int arr[6]= {98,97,108,97,106,105};
    for(int i: arr){
        cout<<(char)i;
    }

    return 0;
}
```

## In python
```python
arr= [98,97,108,97,106,105]

for i in arr:
    print(chr(i),end='')
  
```
