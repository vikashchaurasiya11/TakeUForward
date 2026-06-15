#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
         
    long long b=0;
    if(x<0){
        long long a=-(long long)(x);
        while(a>0){
            long long c= a%10;
            a/=10;
            b=b*10+c;
        }
        if (-b<INT_MIN){
            return 0;
        }
        return -b;

    }
    else{
        long long a=(long long)x;
        while(a>0){
                long long c= a%10;
                a/=10;
                b=b*10+c;
            }
            if (b>INT_MAX){
                return 0;
            }
            return b;
        }
    }
};
int main() 
{
    Solution obj;
    long long r= obj.reverse(123456780);
    cout<<r<<endl;
    return 0;
}