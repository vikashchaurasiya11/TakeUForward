class Solution {
public:
    void pattern8(int n) {
        for(int i=0;i<n;i++){
            for(int k=0;k<i;k++){
                cout<<" ";
            }
            for(int j=0;j<(2*(n-i-1))+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};