class Solution {
public:
    void pattern18(int n) {
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                cout<<char(j+65)<<" ";
            }
            cout<<endl;
        }
    }
};