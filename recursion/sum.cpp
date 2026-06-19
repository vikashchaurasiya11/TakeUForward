#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
            if(N==0) return 0;
            return N+ NnumbersSum(N-1);
		}
        
};
int main() 
{
    Solution obj;
    int r= obj.NnumbersSum(10);
    cout<<r<<endl;
    return 0;
}