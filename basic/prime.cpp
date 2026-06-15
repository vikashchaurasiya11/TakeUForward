class Solution {
public:
    bool isPrime(int n) {
        bool flag=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) return true;
        return false;
    }
};