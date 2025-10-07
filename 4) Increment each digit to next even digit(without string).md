## Question 4:(without string) Increment each digit to next even digit

### Output:
244668800

## In c++
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n= 123456789;
    int num=0;
    while(n>0){
        int digit= n%10;
        if(digit%2==0)
        digit= (digit+2)%10;
        else
        digit= (digit+1)%10;
        
        num= num*10 +digit;
        n/=10;
    }
    
    int ans=0; // num should be reversed to get ans
    while(num>0){
        ans= ans*10+num%10;
        num/=10;
    }
    cout<<ans;
    return 0;
}
```

## In python
```python
n= 123456789
num=0

while n>0:
    digit= n%10;
    if digit%2==0:
        digit= (digit+2)%10;
    else:
        digit= (digit+1)%10;
        
    num=num*10+digit;
    n//=10
    
print(str(num)[::-1])  #num should be reversed to get ans
```
