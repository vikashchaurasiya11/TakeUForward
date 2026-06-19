#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if(n==0) return ;
        printNumbers(n-1);
        cout<<n<<endl;
    }
};
int main() 
{
    Solution obj;
    obj.printNumbers(20);
    return 0;
}