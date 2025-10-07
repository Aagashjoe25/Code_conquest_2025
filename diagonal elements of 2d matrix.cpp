#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n]; // alternative int arr[3][3]= {{1,1,1},{2,2,2},{3,3,3}} can be used only wheh n is known
    for(int i=0;i<n;i++){
        int num=i+1;
        for(int j=0;j<n;j++)
        arr[i][j]=num;
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
    // alternative way to print main diagonal, only when its square array
    for(int i=0;i<n;i++){
        cout<<arr[i][i]<<" ";
    }
    
    return 0;
}
