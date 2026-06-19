#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        if(n==0) return ;
        cout<<arr[n-1]<<" ";
        reverse(arr,n-1);
    }
};

int main() 
{
    int arr[4]={1,2,3,4};
    Solution obj;
    obj.reverse(arr, 4);
    return 0;
}