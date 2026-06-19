#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution {
public:
    int factorial(int n) {
        if(n==1) return 1;
        return n*factorial(n-1);
    }
};
int main() 
{
    Solution obj;
    int r= obj.factorial(5);
    cout<<r<<endl;
    return 0;
}