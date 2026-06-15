#include <iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int a=n;
        int count=0;
        while(a>0){
            a/=10;
            count++;
        }
        return count;
    }
};
int main() 
{
    Solution obj;
    int r= obj.countDigit(123456789);
    cout<<r<<endl;
    return 0;
}