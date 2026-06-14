class Solution {
public:
    void pattern17(int n) {
        for(int i=0;i<n;i++){
            for(int k=0;k<n-i-1;k++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<char(j+65);
            }
            for(int l=i-1;l>=0;l--){
                cout<<char(l+65);
            }

            cout<<endl;
        }
    }
};