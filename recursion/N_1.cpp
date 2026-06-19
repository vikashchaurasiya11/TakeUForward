#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if(n==0) return ;
        cout<<n<<endl;
        printNumbers(n-1);
    }
};
int main() 
{
    Solution obj;
    obj.printNumbers(20);
    return 0;
}