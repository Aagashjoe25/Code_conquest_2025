## C++ program to fill the array with row number and get the diagonal elements

### Output:
<img width="387" height="208" alt="Screenshot 2025-10-07 141704" src="https://github.com/user-attachments/assets/9a4fa215-0751-48aa-b296-90c3112aa62e" />



```cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n]; // alternative int arr[3][3]= {{1,1,1},{2,2,2},{3,3,3}} can be used only when n is known
    for(int i=0;i<n;i++){
        int row=i+1;
        for(int j=0;j<n;j++)
        arr[i][j]=row;
    }
    
    //print the array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //print the main diagonal
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    /* alternative way to print main diagonal, only when its square array
    for(int i=0;i<n;i++){
        cout<<arr[i][i]<<" ";
    }
    */
    return 0;
}
```
