class Solution {
public:
    int GCD(int n1,int n2) {
        while((n1%n2)!=0){
           n1=n1%n2;
           int temp= n1;
           n1=n2;
           n2=temp;
        }
        return n2;
    }
};