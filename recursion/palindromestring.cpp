#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

class Solution{	
	public:	
        bool helper(string&s,int l,int h){
            if(l<h){
                if(s[l]!=s[h]) return false;
                return helper(s,l+1,h-1);
            }
            return true;
            
        }	
		bool palindromeCheck(string& s){
            return helper(s,0,s.length()-1);
		}
};

int main() 
{
    string str="abd";
    Solution obj;
    if(obj.palindromeCheck(str)) cout<<true<<endl;
    else cout<<false<<endl;
    return 0;
}