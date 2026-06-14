#include <iostream>
using namespace std;

class Solution {
public:
    void pattern21(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0 || i==0 || j==n-1 || i==n-1) cout<<"*";
                else cout<<" ";
                
            }
            cout<<endl;
        }
    }
};
int main() 
{

    Solution obj;
    obj.pattern21(10);
    return 0;
}