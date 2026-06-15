class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0) return false;
        else {
            long long b=0;
            long long a=(long long)n;
            while(a>0){
                long long c= a%10;
                a/=10;
                b=b*10+c;
            }

            if(b==n){
                return true;
            }
            return false;
        }
    }
};