class Solution {
public:
    bool isArmstrong(int n) {
        int a=n;
        int sum=0;
        while(a>0){
            int b= a%10;
            sum+=(b*b*b);
            a/=10;
            
        }
        if(sum==n) return true;
        return false;
    }
};