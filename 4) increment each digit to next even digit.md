## Question 4: Increment each digit to next even digit
-> Using string

### Output:
244668800
## In c++
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n= 123456789;
    string str=to_string(n);
    
    for(char ch:str){
        int digit= ch-'0';
        if(digit%2==0)
        cout<<(digit+2)%10;  //use %10 instead of extra if condition for 8 and 9
        else
        cout<<(digit+1)%10;
    }

    return 0;
}
```

## In python
```python
n= 123456789
num= str(n)

for ch in num:
    digit= int(ch)
    if digit%2==0:
        print((digit+2)%10,end='')  #use %10 instead of if condition for 8 and 9
    else:
        print((digit+1)%10,end='')
```
